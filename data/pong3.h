#ifndef DEF_eb
#define DEF_eb
#endif

#include <SDL2/SDL.h>
#include <stdio.h>
 #include<vector> 
#include <string>
#include<iostream>
#include<cmath>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cstdlib>
#include <stdlib.h>
#include <random>
#include <time.h>
#include <cstdio>
#include<stdarg.h>

#include <thread>
#include <tuple>

#include<map>
//#include<windows.h>

 #include <SDL/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
using namespace std;//CHASSAL AU festival YEAH!
/* g++ -o t.exe main.cpp -lmingw32 -lSDLmain -lSDL -lSDL_mixer -lSDL_ttf -lSDL_image -mwindows
PRENDRE LES LIBS 32 BIT à CHAQUE FOIS (ttf mixer image)
//imports:
fstream txt("score.txt",ios::in);txt>>hs;txt.close();
//rand
int rrand(int a,int b){return (rand()%(b-a))+a;}
//SDL :

#include <SDL/SDL_getenv.h>
putenv("SDL_VIDEO_WINDOW_POS=center"); //pour centrer la fenêtre
putenv("SDL_VIDEO_WINDOW_POS=0,0");
SDL_Surface* screen = SDL_SetVideoMode(1000, 567, 32,SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN|SDL_NOFRAME|SDL_RESIZABLE);
SDL_Surface* f = SDL_LoadBMP(".bmp");
SDL_Surface* viaSDLimage = IMG_Load(".png.jpg etc");
SDL_Rect pos={0,0,100,100};
float t= SDL_GetTicks();
SDL_Init( SDL_INIT_VIDEO);SDL_WM_SetCaption("title",NULL);
SDL_WM_SetIcon(IMG_Load("sdl_icone.bmp"), NULL);
SDL_SetColorKey(jj, SDL_SRCCOLORKEY, SDL_MapRGB(jj->format,73,176,255));
SDL_Delay(1000);
SDL_FreeSurface(l);
while (cm)
{if (SDL_GetTicks()-t>150){t=SDL_GetTicks();}
SDL_BlitSurface(f,NULL,screen,&poss);
SDL_Flip(screen);
SDL_Event e;SDL_PollEvent(&e);
if (e.type==SDL_QUIT){cm=0;}
if (e.type==SDL_KEYDOWN){
if(e.key.keysym.sym==SDLK_SPACE ){}
if(e.key.keysym.sym==SDLK_q){}
}}

SDL_Quit();
//SDL mixer
Mix_FreeMusic(musique);
Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS,1024);
Mix_Music *musique;musique = Mix_LoadMUS(".wav");
Mix_PlayMusic(musique, 50);
Mix_VolumeMusic(MIX_MAX_VOLUME / 2);
Mix_ResumeMusic(); //Reprendre
Mix_PauseMusic();//pause
Mix_RewindMusic();// retour debut
Mix_HaltMusic() ;//fin
Mix_CloseAudio();//fin API SDL mixer

//SDL ttf
TTF_Init();
TTF_Font *popo= TTF_OpenFont(".ttf", 150);
const char *texte="test";
SDL_Surface *txt=TTF_RenderText_Blended(popo, texte, cn);
TTF_Quit();


int main( int argc, char** argv ){
return 0;}
*/
/*
struct elemdico{char * nom;int plan;int indice;};
typedef struct elemdico elemdico;*/
/*
struct element{elemdico valeur;element * suivant;};
typedef struct element element
typedef element * liste
class List
{
	public:
	liste =NULL
	void 
*/
#define DISABLE_MOUSEMOTION_EVENTS 0
#define ENABLE_MOUSEMOTION_EVENTS 1
template<typename T>
int estDansVect(vector<T> tab,T elem )
{
	for(int i=0;i<tab.size();i++)
	{
		if(tab[i]==elem)return 1;
	}
	return 0;
}
int castInt(float x);
int rrand(int a,int b);
int sum(int taille,int tab[]);
float sum(int taille,float tab[]);
int reach(float i,int taille,int tab[]);
int reach(float i,int taille,float tab[]);

int sum(int taille,vector<int> tab);
float sum(int taille,vector<float> tab);
int reach(float i,int taille,vector<int> tab);
int reach(float i,int taille,vector<float>tab);

string ItoS(int x);
int StoI(string s);
float dmod(float x,float y);
void yolo(string s);


class IntTab
{
	private:
	vector<int> tab;
	
	public:
	IntTab(int taille,...);
	IntTab(int taille,int t[]);
	IntTab(string param);
	int size();
	int get(int indice);
	void set(int indice, int i);
	void append(int i);
	int pop();
	void concatG(IntTab t);
	void concatD(IntTab t);
	void del(int indice);
	void resize(int i,int val);
	void resize(int i);
	string str();
	int sum();
	int reach(int i);
	int reach(float i);
	
};

class DblTab
{
	private:
	vector<float> tab;
	
	public:
	DblTab(int taille,...);
	DblTab(int taille,float t[]);
	int size();
	float get(int indice);
	void set(int indice, float i);
	void append(float i);
	float pop();
	void concatG(DblTab t);
	void concatD(DblTab t);
	void del(int indice);
	void resize(int i,float val);
	void resize(int i);
	float sum();
	int reach(float i);
	
};

class PtrTab
{
	private:
	vector<void *> tab;
	
	public:
	PtrTab(int taille,...);
	PtrTab(int taille,void* t[]);
	int size();
	void* get(int indice);
	void set(int indice, void* i);
	void append(void* i);
	void* pop();
	void concatG(PtrTab t);
	void concatD(PtrTab t);
	void del(int indice);
	void resize(int i,void* val);
	void resize(int i);
	
};

class SrfTab
{
	private:
	vector<SDL_Surface*> tab;
	
	public:
	SrfTab(int taille,...);
	SrfTab(int taille,SDL_Surface* t[]);
	int size();
	SDL_Surface* get(int indice);
	void set(int indice, SDL_Surface* i);
	void append(SDL_Surface* i);
	SDL_Surface* pop();
	void concatG(SrfTab t);
	void concatD(SrfTab t);
	void del(int indice);
	void resize(int i,SDL_Surface* val);
	void resize(int i);
	
};

class StrTab
{
	private:
	vector<string> tab;
	
	public:
	StrTab(string s);
	StrTab(int taille,string t[]);
	int size();
	string get(int indice);
	void set(int indice, string i);
	void append(string i);
	string pop();
	void concatG(StrTab t);
	void concatD(StrTab t);
	void del(int indice);
	void resize(int i,string val);
	void resize(int i);
	void plusegal(int indice,string straconcat);
	void plusegal(int indice,char characoncat);
	
};







struct texturesChargeesToken{SDL_Texture*texture;int nbUtilisations;};
 
struct imgsToken{SDL_Texture*texture;int troncat;};

struct anisToken{vector<SDL_Texture*>textures;vector<int> durees;vector<int> troncats;};

struct floatRectToken{float x;float y;float w;float h;};

struct ecrsToken{vector<SDL_Texture*>textures;vector<SDL_Rect> posLignes;vector<floatRectToken> posfLignes;};



struct vitesseToken{float vx;float vy;};

struct etatToken{
	char typeApparence; 
	string idApparence; 
	int plan; 
	SDL_Rect rect; 
	floatRectToken floatRect;
	vitesseToken vitesse;
	vector<string> classesObstacles;
	int blited;
	};


class item;
struct colToken{item *obstacle;vitesseToken vitesse;vitesseToken vitesseObstacle;char axe;};

class Fenetre;

class item
{
	public :
	Fenetre *f;
	
	map<string,imgsToken> imgs;
	map<string, anisToken> anis;
	map<string,ecrsToken> ecrs;

	vector<colToken> colList;
	
	etatToken etat;
	string id;
	
	item(Fenetre *f,string id,int plan,int x,int y,vector<string>classesObstacles);
	//->Libère l'item qui avait le même id dans f 
	void changerPlan(int plan);
	//->
	void changerApparence(char typeApparence,string idApparence);
	//->change si elle existe
	void changerRect(int x,int y, int w, int h);
	//->
	void changerVitesseXY(float vx, float vy);
	//->
	void changerVitesseX(float vx);
	//->
	void changerVitesseY(float vy);
	//->
	void accelerer(float ax,float ay);
	//->
	void addApparence(string id,int w,int h,int alpha,int R,int V,int B);
	//->
	void addApparence(string id,string file,int troncat,int alpha,int R,int V,int B);//img
	//->Libère l'apparence qui avait le même id
	void addApparence(string id,vector<string> file,vector<int>durees,vector<int> troncat,vector<int> alpha,int R,int V,int B);//ani
	//->Libère l'apparence qui avait le même id
	void addApparence(string id,string texte,string fileTTF,int taille,int alpha,int R,int V,int B);
	//->Libère l'apparence qui avait le même id
	void delApparence(char typeApparence,string idApparence);
	//->free mémoire inclu
	void delApparencePourRemplacement(char typeApparence,string idApparence);
	//->free mémoire inclu
	void freeItem();//pas faite
	//->
	void move();
	//->
	void move(float vx,float vy);
	//->
	void go(float x,float y);
	//->
	void moveX(float vx);
	//->
	void goX(float x);
	//->
	void moveY(float vy);
	//->
	void goY(float y);
	//->
	int moveAuMax(int vx,int  vy,int saveCol);//à faire ou pas
	//->
	int moveAuMax(int saveCol);
	//->
	colToken nextCol();
	
	
	
	
};


class button
{
	public :
	Fenetre *f;
	item *fond;
	item *texte;
	string id;
	void (*action)(Fenetre*f);
	button(Fenetre *f,string id,string texte,void(*action)(Fenetre *f),int x,int y,string filePolice,int taillePolice,
	int alphafond,int Rfond,int Vfond, int Bfond,int alphatexte,int Rtexte,int Vtexte, int Btexte,int ajustTextX,int ajustTextY);
	void freeButton();
};
struct infosTexteToken
{
	string texte;string filePolice;int taillePolice; int alphatexte;int Rtexte;int Vtexte; int Btexte;
};
class entry
{
	public :
	Fenetre *f;
	item *fond;
	item *texte;
	string id;
	int nbChar;
	int actif;
	infosTexteToken infosTexte;
	void (*enterAction)(Fenetre*f);
	entry(Fenetre *f,string id,int nbChar,string texteDefaut,void(*action)(Fenetre *f),int x,int y,string filePolice,int taillePolice,
	int alphafond,int Rfond,int Vfond, int Bfond,int alphatexte,int Rtexte,int Vtexte, int Btexte,int ajustTextX,int ajustTextY);
	string get();
	void freeEntry();
	string creerTexte(string texte);
};


class Fenetre
{
	
	public:
	SDL_Window* window=NULL;
	SDL_Renderer *renderer=NULL;
	int largeur;
	int hauteur;
	char* titre=NULL;
	float fpsMax;
	float currFps;
	float dureeLooping;

	int conti;
	float t;
	SDL_Event *e;
	int nbPlans;
	SDL_Rect posBG;
	
	int buttonPushed;
	
	entry * entreeActive;
	
	map<string,entry*> allEntriesList;
	
	map<string,button*> allButtonsList;
	
	map<string,item*> allItemsList;
	
	map<int,string> scanCodeToChar;
	
	map<pair<string,int>,texturesChargeesToken> texturesChargees;
	
	map<string,map<string,item*>> obstaclesList;
	// map<string,item*> obstaclesList;

	map<void (*)(Fenetre *f),int> actionsList;
	map<void (*)(Fenetre *f),int> actionsListCopie;
	
	vector<map<string,item*>> blitList;
	
	
	
	SDL_Texture *BG=NULL;
	
	Fenetre(int l,int h,char *title,int posx,int posy,int nbPlans,void (*fStart)(Fenetre *f),int fpsmax,int fullscreen);
	
	int nextEvent(int flag);
	
	void resetImgs();
	void resetActions();

	
	void setFpsMax(float fpsmax);
	void setBG(char* s,int alpha);

	
	void addAction(void (*f)(Fenetre *fen),int init);
	void delAction(void (*f)(Fenetre *fen));
	
	
	void unBlit(item *it);
	
	void blit(item *it);
	void deleteAlls();
	void addObstacleInvisible(item *it);
	void delObstacleInvisible(item *it);

	void loopActions();
	void loopBlit();
	
	void quit();

	void mainLoop();
	void finMainLoop();
	
	
};









