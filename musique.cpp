#include "musique.h"

musique::musique()
{
music->setMedia(QUrl("C:/Users/LENOVO/Desktop/esprit/projet c++/devis/music/beethoveen.mp3"));
}
int musique:: playmusique()
{

        music->play();
    }

int musique::stopmusique()
{

    music->pause();

}
int musique::volume(int v)
{

    music->setVolume(v);

}
