#ifndef MUSIQUE_H
#define MUSIQUE_H

#include<QMediaPlayer>

class musique
{
private:

    QMediaPlayer *music =new  QMediaPlayer();

public:
    musique();

    int playmusique();
   int stopmusique();
   int volume(int);
};

#endif // MUSIQUE_H
