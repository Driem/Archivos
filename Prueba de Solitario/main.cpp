#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <stack>
#include <ctime>
#include <iostream>
#include <string.h>
#include <sstream>
#include <list>


using namespace std;
using namespace sf;



/*Sprite PintaImagen(stack<string> *Bar1,int x,int y){
        Texture text2;
        text2.loadFromFile(Bar1->top());
        Sprite spr(text2);
        spr.setPosition(x,y);
        return spr;
}*/

string Ramdomizador(){
    int r = 1 + rand() % 67;

    string T,cad;
    T = static_cast<std::ostringstream*>(&(ostringstream() << r))->str();
    stringstream ss;
    ss <<"C:/Users/DELL-INSPIRON15R/Desktop/Examen Estructuras/Prueba de Solitario/cardset-greywyvern/"<< T <<".png";
    cad = ss.str();

        return cad;
}

void LLenaBaraja(stack<string> *Baraja){
    for(int i = 0; i < 10; i++){
        Baraja->push(Ramdomizador());
    }

}

void LLenaBaraja(list<string> *Baraja){
    for(int i = 0; i < 10; i++){
        Baraja->push_back(Ramdomizador());
    }

}
void InAndOut(stack<string> *Bar1, stack<string> *Bar2){
            if(Bar1->size()>1){
                Bar2->push(Bar1->top());
                Bar1->pop();
            }else{
                cout<<"Vuelve a LLenar la Baraja!! "<<endl;
                LLenaBaraja(Bar1);
            }
}


void OutAndIn(stack<string> *Bar1, stack<string> *Bar2){
        if(Bar2->size()>1){
                Bar1->push(Bar2->top());
                Bar2->pop();
        }else{
            cout<<"Vuelve a LLenar la Baraja!! "<<endl;
                LLenaBaraja(Bar2);
        }
}

bool lf_bCheckForMouseTrigger(sf::Sprite &av_Sprite, sf::RenderWindow &av_Window)
{

    int mouseX = sf::Mouse::getPosition().x;
    int mouseY = sf::Mouse::getPosition().y;

    sf::Vector2i windowPosition = av_Window.getPosition();

    if(mouseX > av_Sprite.getPosition().x + windowPosition.x && mouseX < ( av_Sprite.getPosition().x + av_Sprite.getGlobalBounds().width + windowPosition.x)
        && mouseY > av_Sprite.getPosition().y + windowPosition.y + 30  && mouseY < ( av_Sprite.getPosition().y + av_Sprite.getGlobalBounds().height + windowPosition.y + 30) )
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            return true;
        }
        return false;
    }

    return false;

}


void Cambiar(list<string> *lista){
list<string> Aux;

Aux.push_front(lista->front());
lista->pop_front();
lista->push_back(Aux.front());

}
/*
void drag(RenderWindow& Window)
{
    FloatRect bounds;
    CircleShape circle;
    int xPos, yPos, xDiff, yDiff, once;
    int xBase, yBase;
    Vector2i mousePos;
    Vector2f circlePos;
mousePos = Mouse::getPosition(Window);
circlePos = circle.getPosition();

if(Mouse::isButtonPressed(Mouse::Left))
{
    if(mousePos.x > xPos && mousePos.y > yPos
        && mousePos.x - bounds.width < xPos && mousePos.y - bounds.height < yPos)
    {
        if(once)
        {
            xDiff = mousePos.x - circlePos.x;
            yDiff = mousePos.y - circlePos.y;
            once = 0;
        }
        xPos = mousePos.x - xDiff;
        yPos = mousePos.y - yDiff;
        circle.setPosition(xPos, yPos);
    }
}
else
{
    once = 1;
    xPos = xBase;
    yPos = yBase;
    xDiff = 0;
    yDiff = 0;
    circle.setPosition(xBase, yBase);
}
Window.draw(circle);
}
*/

void DragAndDrop(sf::Sprite &av_Sprite, sf::RenderWindow &av_Window){
        int x = av_Sprite.getPosition().x;
        int y = av_Sprite.getPosition().y;
        int mouseX = sf::Mouse::getPosition().x;
        int mouseY = sf::Mouse::getPosition().y;

        int px,py;
        if(lf_bCheckForMouseTrigger(av_Sprite,av_Window)){
        x =+ mouseX;
        y =+ mouseY;
        av_Sprite.setPosition(x,y);
        }


}
int main()
{
    srand(time(0));

    RenderWindow window(sf::VideoMode(800, 500), "Proyecto Estructuras : Solitario",Style::Titlebar | Style::Close);
     Texture Fondo;
     //Se declara y Pinta el Fondo
    Fondo.loadFromFile("Fondo_hda_6.png");
    Sprite Fondo1(Fondo);


    SoundBuffer soundBuffer;
    Sound sound;
    if(!soundBuffer.loadFromFile("05 God's Great Dance Floor.wav"))
    cout << "No se encuentra la Cancion"<<endl;
    sound.setBuffer(soundBuffer);
    //Esta modula la voz
    sound.setPitch(1.0f);

    //Prueba e las Stacks
    stack<string> PrimerB;
    stack<string> SegundaB;
    stack<string> TerceraB;
    stack<string> CuartaB;
    stack<string> QuintaB;
    stack<string> SextaB;
    stack<string> SeptimaB;
    stack<string> NovenaB;
    stack<string> DecimaB;
    stack<string> OnceavaB;
    stack<string> DoceavaB;
    list<string> OctabaB;

    LLenaBaraja(&PrimerB);
    LLenaBaraja(&SegundaB);
    LLenaBaraja(&TerceraB);
    LLenaBaraja(&CuartaB);
    LLenaBaraja(&QuintaB);
    LLenaBaraja(&SextaB);
    LLenaBaraja(&SeptimaB);
    LLenaBaraja(&OctabaB);
    LLenaBaraja(&NovenaB);
    LLenaBaraja(&DecimaB);
    LLenaBaraja(&OnceavaB);
    LLenaBaraja(&DoceavaB);
    //Tercera Baraja

    Texture texture,texture2, texture3,texture4,texture5,texture6,texture7,texture8,texture9,texture10,texture11,texture12;
   // PintaImagen(&PrimerB,0,0);
    texture.loadFromFile(PrimerB.top());
    texture2.loadFromFile(SegundaB.top());
    texture3.loadFromFile(TerceraB.top());
    texture4.loadFromFile(CuartaB.top());
    texture5.loadFromFile(QuintaB.top());
    texture6.loadFromFile(SextaB.top());
    texture7.loadFromFile(SeptimaB.top());
    texture8.loadFromFile(OctabaB.front());
    texture9.loadFromFile(NovenaB.top());
    texture10.loadFromFile(DecimaB.top());
    texture11.loadFromFile(OnceavaB.top());
    texture12.loadFromFile(DoceavaB.top());


    Sprite sprite(texture);
    Sprite sprite2(texture2);
    Sprite sprite3(texture3);
    Sprite sprite4(texture4);
    Sprite sprite5(texture5);
    Sprite sprite6(texture6);
    Sprite sprite7(texture7);
    Sprite sprite8(texture8);
    Sprite sprite9(texture9);
    Sprite sprite10(texture10);
    Sprite sprite11(texture11);
    Sprite sprite12(texture12);

    sprite.setPosition(5,250);
    sprite2.setPosition(100,250);
    sprite3.setPosition(195,250);
    sprite4.setPosition(290,250);
    sprite5.setPosition(385,250);
    sprite6.setPosition(480,250);
    sprite7.setPosition(575,250);
    sprite8.setPosition(670,10);
    sprite9.setPosition(100,10);
    sprite10.setPosition(195,10);
    sprite11.setPosition(290,10);
    sprite12.setPosition(385,10);

            sf::Font font;
            if (!font.loadFromFile("a_LancetCmDn.ttf"))
            return EXIT_FAILURE;
            sf::Text text("Ganaste!!", font, 100);
            text.setPosition(200,150);
            text.setColor(Color::Magenta);


    //PintaImagen(&PrimerB,0,0);
    sound.play();
    while (window.isOpen())
    {


        sf::Event event;

        while (window.pollEvent(event))
        {


            if (event.type == Event::Closed)
                window.close();

            //Hace que Empieze el Sonido

           // if (event.type == sf::Event::MouseButtonReleased){
           if(Mouse::isButtonPressed(Mouse::Right))
                 OutAndIn(&PrimerB,&SegundaB);


            if(Mouse::isButtonPressed(Mouse::Left))
                    InAndOut(&PrimerB,&SegundaB);

            if(lf_bCheckForMouseTrigger(sprite8, window))
                    Cambiar(&OctabaB);

           // if(lf_bCheckForMouseTrigger(sprite7, window))

                DragAndDrop(sprite7, window);


            if (event.type == Event::KeyPressed){
                if (event.key.code == sf::Keyboard::Up)
                        InAndOut(&TerceraB,&CuartaB);


                if (event.key.code == Keyboard::Down)
                        OutAndIn(&TerceraB,&CuartaB);


                if (event.key.code == sf::Keyboard::Right)
                        InAndOut(&QuintaB,&SextaB);


                if (event.key.code == Keyboard::Left)
                        OutAndIn(&QuintaB,&SextaB);

                //if(NovenaB.size() == 12 &&DecimaB.size() == 12&&OnceavaB.size() == 12&&DoceavaB.size() == 12)


                }
                // Create a graphical text to display



    texture.loadFromFile(PrimerB.top());
    texture2.loadFromFile(SegundaB.top());
    texture3.loadFromFile(TerceraB.top());
    texture4.loadFromFile(CuartaB.top());
    texture5.loadFromFile(QuintaB.top());
    texture6.loadFromFile(SextaB.top());
    texture7.loadFromFile(SeptimaB.top());
    texture8.loadFromFile(OctabaB.front());




    /*Sprite sprite(texture);
    Sprite sprite2(texture2);
    Sprite sprite3(texture3);
    Sprite sprite4(texture4);

    sprite.setPosition(5,0);
    sprite2.setPosition(5,160);
    sprite3.setPosition(150,0);
    sprite4.setPosition(150,160);*/

//    PintaImagen(&PrimerB,0,0);

        }

        window.clear();
       window.draw(Fondo1,RenderStates::Default);
       window.draw(sprite,RenderStates::Default);
       window.draw(sprite2,RenderStates::Default);
       window.draw(sprite3,RenderStates::Default);
       window.draw(sprite4,RenderStates::Default);
       window.draw(sprite5,RenderStates::Default);
       window.draw(sprite6,RenderStates::Default);
       window.draw(sprite7,RenderStates::Default);
       window.draw(sprite8,RenderStates::Default);
       window.draw(sprite9,RenderStates::Default);
       window.draw(sprite10,RenderStates::Default);
       window.draw(sprite11,RenderStates::Default);
       window.draw(sprite12,RenderStates::Default);
        window.draw(text);

        window.display();
    }


    return 0;
}
