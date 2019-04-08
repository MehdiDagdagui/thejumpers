int main(int argc, char *argv[])
{
	SDL_Surface *ecran = NULL, *back=NULL;
	Perso ennemi;
	SDL_Rect posBack;
	SDL_Event event;
	int min=0, max = 200;	
	
	SDL_Init (SDL_INIT_VIDEO);
	ecran = SDL_SetVideoMode (800,600,32,SDL_HWSURFACE | SDL_DOUBLEBUF);
	back=IMG_Load ("back.bmp");
	ennemi.img[0] = IMG_Load("detective.png");
	if(ennemi.img[0]==NULL)
		exit(EXIT_FAILURE);
	
	
	posBack.x=0;
	posBack.y=0;
	
	ennemi.pos.x=0;
	ennemi.pos.y=200;
	ennemi.direction = 1;
	
	while (event.type != SDL_QUIT)
	{	SDL_PollEvent(&event);
		
		//affichage
		SDL_BlitSurface (back, NULL, ecran, &posBack);
		deplacer_ennemi (&ennemi, min, max);	
		afficher_ennemi (&ennemi, ecran);
		SDL_Flip(ecran);
		
		//gestion des evenements...
		
	}	
}

