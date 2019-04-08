#include<SDL/SDL.h>
#include<SDL/SDL_image.h>

typedef struct 
{
	SDL_Surface *img[4];
	SDL_Rect pos;
	int direction; //0 : a droite,  1: a gauche

}Perso;

SDL_FreeSurface(ennemi.img[0]);
SDL_FreeSurface(back);
SDL_FreeSurface(ecran);		
SDL_Quit();


