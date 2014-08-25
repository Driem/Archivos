#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <stack>
#include <ctime>
#include <iostream>
#include <string.h>
#include <sstream>


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
    ss << "C:/Users/DELL-INSPIRON15R/Desktop/Examen Estructuras/Prueba de Slitario/cardset-greywyvern/"<<T<<".png";
    cad = ss.str();
        return cad;
}

void LLenaBaraja(stack<string> *Baraja){
    for(int i = 0; i < 10; i++){
        Baraja->push(Ramdomizador());
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
    if(!soundBuffer.loadFromFile("JT_Bruce_ _The_Dreamer_s_Overture.wav"))
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

    LLenaBaraja(&PrimerB);
    LLenaBaraja(&SegundaB);
    LLenaBaraja(&TerceraB);
    LLenaBaraja(&CuartaB);
     LLenaBaraja(&QuintaB);
    LLenaBaraja(&SextaB);
    //Tercera Baraja

    Texture texture,texture2, texture3,texture4,texture5,texture6;
   // PintaImagen(&PrimerB,0,0);
    texture.loadFromFile(PrimerB.top());
    texture2.loadFromFile(SegundaB.top());
    texture3.loadFromFile(TerceraB.top());
    texture4.loadFromFile(CuartaB.top());
    texture5.loadFromFile(QuintaB.top());
    texture6.loadFromFile(SextaB.top());


    Sprite sprite(texture);
    Sprite sprite2(texture2);
    Sprite sprite3(texture3);
    Sprite sprite4(texture4);
    Sprite sprite5(texture5);
    Sprite sprite6(texture6);

    sprite.setPosition(5,0);
    sprite2.setPosition(5,160);
    sprite3.setPosition(150,0);
    sprite4.setPosition(150,160);
    sprite5.setPosition(300,0);
    sprite6.setPosition(300,160);


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

            if (event.type == Event::KeyPressed){
                if (event.key.code == sf::Keyboard::Up)
                        InAndOut(&TerceraB,&CuartaB);


                if (event.key.code == Keyboard::Down)
                        OutAndIn(&TerceraB,&CuartaB);


                if (event.key.code == sf::Keyboard::Right)
                        InAndOut(&QuintaB,&SextaB);


                if (event.key.code == Keyboard::Left)
                        OutAndIn(&QuintaB,&SextaB);



                }

    texture.loadFromFile(PrimerB.top());
    texture2.loadFromFile(SegundaB.top());
    texture3.loadFromFile(TerceraB.top());
    texture4.loadFromFile(CuartaB.top());
    texture5.loadFromFile(QuintaB.top());
    texture6.loadFromFile(SextaB.top());


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

        window.display();
    }


    return 0;
}
