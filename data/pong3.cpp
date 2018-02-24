#include "include2.h"
#include "pong3.h"
using namespace std;
#define nbImages 50000;
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
if(e.key.keysym.sym==SDLK_SPACE ){""}
if(e.key.keysym.sym==SDLK_q){""}
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

/*******

SDL2 :
int SDL_RenderCopyEx(SDL_Renderer*          renderer,
                     SDL_Texture*           texture,
                     const SDL_Rect*        srcrect,
                     const SDL_Rect*        dstrect,
                     const float           angle,
                     const SDL_Point*       center,
                     const SDL_RendererFlip flip)
****************/

int rrand(int a,int b)
{
	return (rand()%(b-a))+a;
}
int castInt(float x)
{
	if(x>=0)return (int)x;
	return (int)x-1;
}

void yolo(string s)
{
	fstream fich;
	fich.open("a.txt", ios::out|ios::app);
	fich<<s;
	fich.close();
}


int sum(int taille,int tab[])
{
	int res=0;
	for(int i=0;i<taille;i++)
	{
		res+=tab[i];
	}
	return res;
}

float sum(int taille,float tab[])
{
	float res=0;
	for(int i=0;i<taille;i++)
	{
		res+=tab[i];
	}
	return res;
}

int reach(float i,int taille,int tab[])
{
	if(i>sum(taille,tab))
	{
		return -1;
	}
	int res=0;
	int currsum=0;
	while(res<taille and currsum<=i)
	{
		currsum+=tab[res];
		res++;	
	}
	return res-1;
}
int reach(float i,int taille,float tab[])
{
	if(i>sum(taille,tab))
	{
		return -1;
	}
	int res=0;
	float currsum=0;
	while(res<taille and currsum<=i)
	{
		currsum+=tab[res];
		res++;	
	}
	return res-1;
}


int sum(int taille,vector<int> tab)
{
	int res=0;
	for(int i=0;i<taille;i++)
	{
		res+=tab[i];
	}
	return res;
}

float sum(int taille,vector<float> tab)
{
	float res=0;
	for(int i=0;i<taille;i++)
	{
		res+=tab[i];
	}
	return res;
}

int reach(float i,int taille,vector<int> tab)
{
	if(i>sum(taille,tab))
	{
		return -1;
	}
	int res=0;
	int currsum=0;
	while(res<taille and currsum<=i)
	{
		currsum+=tab[res];
		res++;	
	}
	return res-1;
}

int reach(float i,int taille,vector<float>tab)
{
	if(i>sum(taille,tab))
	{
		return -1;
	}
	int res=0;
	float currsum=0;
	while(res<taille and currsum<=i)
	{
		currsum+=tab[res];
		res++;	
	}
	return res-1;
}


string ItoS(int x)
{/**/
	if(x==0)
	{
		return "0";
	}
	string s="";
	int est_negatif;
	if(x>=0)
	{
		est_negatif=0;
	}
	else
	{
		est_negatif=1;
		x=-x;
	}
	while(x!=0)
	{
		char c=(char)(x%10+48);
		string temp;
		temp+=c;
		s=temp+s;
		x=x/10;
	}
	if(est_negatif)
	{
		return "-"+s;
	}
	return s;
}

int StoI(string s)
{
	int res=0;
	if(s[0]=='-')
	{
		for(int i=1;i<s.size();i++)
		{
			res*=10;
			res+=(int)s[i]-48;
		}
		res=-res;
	}
	else
	{
		for(int i=0;i<s.size();i++)
		{
			res*=10;
			res+=(int)s[i]-48;
		}
	}
	return res;
}

float dmod(float x,float y)
{/*modulo pour float, renvoie (x dmod y)*/
	
	if(y==0)
	{
		return 0;
	}
	float res=(x-((int)(x/y))*y);
	
	if(0<=res and res<y)
	{
		return res;
	}
	else
	{
		return 0;
	}
}
//Tab :
//INT :
IntTab::IntTab(int taille,...)
{/**/
	
	this->tab.resize(taille);
	va_list listeint;
	va_start(listeint,taille);
	
	for(int i =0;i<taille;i++)
	{
		this->tab[i]=va_arg(listeint,int);
	}
}

IntTab::IntTab(int taille,int t[])
{/**/
	
	this->tab.resize(taille);
	for(int i =0;i<taille;i++)
	{
		this->tab[i]=t[i];
	}
}

IntTab::IntTab(string param)
{/*exemple init : IntTab t("154,78,8,99,65,-1")*/
	int taille=1;
	if(param=="")
	{
		taille=0;
	}
	else
	{
		for(int i =0;i<param.size();i++)
		{
			if(param[i]==',')
			{
				taille++;
			}
		}
	}
	this->resize(taille);
	
	string straconv;
	int indicestr=0;
	for(int i=0;i<taille;i++)
	{
		 straconv="";
		 while(param[indicestr]!=',' and indicestr<param.size())
		 {
			 straconv+=param[indicestr];
			 indicestr++;
		 }
		 this->set(i,StoI(straconv));
		 indicestr++;
	}	
}

int IntTab::size()
{
	return this->tab.size();
}

int IntTab::get(int indice)
{/**/
	if(indice>=this->size())
	{
		return -999;
	}
	return this->tab[indice];
}

void IntTab::set(int indice, int i)
{
	if(indice<this->size())
	{
		this->tab[indice]=i;
	}
	
}

void IntTab::append(int i)
{
	this->tab.push_back(i);
}

int IntTab::pop()
{
	int res=this->tab[this->tab.size()-1];
	this->tab.pop_back();
	return res;
}

void IntTab::concatG(IntTab t)
{
	int newsize=this->size()+t.size();
	this->tab.resize(newsize);
	for(int i=newsize-1;i>=t.size();i--)
	{
		this->set(i,this->get(i-t.size()));
	}
	for(int i=0;i<t.size();i++)
	{
		this->set(i,t.get(i));
	}
}

void IntTab::concatD(IntTab t)
{
	int newsize=this->size()+t.size();
	this->tab.resize(newsize);
	for(int i=newsize-t.size();i<newsize;i++)
	{
		this->set(i,t.get(i-newsize+t.size()));
	}
	
}

void IntTab::del(int indice)
{
	if(indice<this->size())
	{
		for(int i=indice;i<this->size()-1;i++)
		{
			this->set(i,this->get(i+1));
		}
		this->tab.resize(this->size()-1);
	}
}

void IntTab::resize(int i,int val)
{/*si grandi, est rempli par val*/
	this->tab.resize(i,val);
}

void IntTab::resize(int i)
{
	this->tab.resize(i);
}

string IntTab::str()
{
	string s="{";
	for(int i=0;i<this->size()-1;i++)
	{
		s=s+ItoS(this->get(i))+",";
	}
	return (s+ItoS(this->get(this->size()-1))+"}");
}

int IntTab::sum()
{
	int res=0;
	for(int i=0;i<this->tab.size();i++)
	{
		res+=this->tab[i];
	}
	return res;
}

int IntTab::reach(int i)
{
	if(i>this->sum())
	{
		return -1;
	}
	int res=0;
	int currsum=0;
	while(res<this->size() and currsum<i)
	{
		currsum+=this->tab[res];
		res++;	
	}
	return res-1;
}

int IntTab::reach(float i)
{
	if(i>this->sum())
	{
		return -1;
	}
	int res=0;
	float currsum=0;
	while(res<this->size() and currsum<i)
	{
		currsum+=this->tab[res];
		res++;	
	}
	return res-1;
}

//DBL :

DblTab::DblTab(int taille,...)
{/**/
	
	this->tab.resize(taille);
	va_list listefloat;
	va_start(listefloat,taille);
	
	for(int i =0;i<taille;i++)
	{
		this->tab[i]=va_arg(listefloat,double);
	}
}

DblTab::DblTab(int taille,float t[])
{/**/
	
	this->tab.resize(taille);
	for(int i =0;i<taille;i++)
	{
		this->tab[i]=t[i];
	}
}

int DblTab::size()
{
	return this->tab.size();
}

float DblTab::get(int indice)
{/**/
	if(indice>=this->size())
	{
		return -999.0;
	}
	return this->tab[indice];
}

void DblTab::set(int indice, float i)
{
	if(indice<this->size())
	{
		this->tab[indice]=i;
	}
	
}

void DblTab::append(float i)
{
	this->tab.push_back(i);
}

float DblTab::pop()
{
	float res=this->tab[this->tab.size()-1];
	this->tab.pop_back();
	return res;
}

void DblTab::concatG(DblTab t)
{
	int newsize=this->size()+t.size();
	this->tab.resize(newsize);
	for(int i=newsize-1;i>=t.size();i--)
	{
		this->set(i,this->get(i-t.size()));
	}
	for(int i=0;i<t.size();i++)
	{
		this->set(i,t.get(i));
	}
}

void DblTab::concatD(DblTab t)
{
	int newsize=this->size()+t.size();
	this->tab.resize(newsize);
	for(int i=newsize-t.size();i<newsize;i++)
	{
		this->set(i,t.get(i-newsize+t.size()));
	}
	
}

void DblTab::del(int indice)
{
	if(indice<this->size())
	{
		for(int i=indice;i<this->size()-1;i++)
		{
			this->set(i,this->get(i+1));
		}
		this->tab.resize(this->size()-1);
	}
}

void DblTab::resize(int i,float val)
{/*si grandi, est rempli par val*/
	this->tab.resize(i,val);
}

void DblTab::resize(int i)
{
	this->tab.resize(i);
}

float DblTab::sum()
{
	float res=0;
	for(int i=0;i<this->tab.size();i++)
	{
		res+=this->tab[i];
	}
	return res;
}

int DblTab::reach(float i)
{
	if(i>this->sum())
	{
		return -1;
	}
	int res=0;
	float currsum=0;
	while(res<this->size() and currsum<i)
	{
		currsum+=this->tab[res];
		res++;	
	}
	return res-1;
}

//PTR :


PtrTab::PtrTab(int taille,...)
{/**/
	
	this->tab.resize(taille);
	va_list listevoide;
	va_start(listevoide,taille);
	
	for(int i =0;i<taille;i++)
	{
		this->tab[i]=va_arg(listevoide,void*);
	}
}

PtrTab::PtrTab(int taille,void* t[])
{/**/
	
	this->tab.resize(taille);
	for(int i =0;i<taille;i++)
	{
		this->tab[i]=t[i];
	}
}

int PtrTab::size()
{
	return this->tab.size();
}

void* PtrTab::get(int indice)
{/**/
	if(indice>=this->size())
	{
		return (void *)NULL;
	}
	return this->tab[indice];
}

void PtrTab::set(int indice, void* i)
{
	if(indice<this->size())
	{
		this->tab[indice]=i;
	}
	
}

void PtrTab::append(void* i)
{
	this->tab.push_back(i);
}

void* PtrTab::pop()
{
	void* res=this->tab[this->tab.size()-1];
	this->tab.pop_back();
	return res;
}

void PtrTab::concatG(PtrTab t)
{
	int newsize=this->size()+t.size();
	this->tab.resize(newsize);
	for(int i=newsize-1;i>=t.size();i--)
	{
		this->set(i,this->get(i-t.size()));
	}
	for(int i=0;i<t.size();i++)
	{
		this->set(i,t.get(i));
	}
}

void PtrTab::concatD(PtrTab t)
{
	int newsize=this->size()+t.size();
	this->tab.resize(newsize);
	for(int i=newsize-t.size();i<newsize;i++)
	{
		this->set(i,t.get(i-newsize+t.size()));
	}
	
}

void PtrTab::del(int indice)
{
	if(indice<this->size())
	{
		for(int i=indice;i<this->size()-1;i++)
		{
			this->set(i,this->get(i+1));
		}
		this->tab.resize(this->size()-1);
	}
}

void PtrTab::resize(int i,void* val)
{/*si grandi, est rempli par val*/
	this->tab.resize(i,val);
}

void PtrTab::resize(int i)
{
	this->tab.resize(i);
}

//SRF :

SrfTab::SrfTab(int taille,...)
{/**/
	
	this->tab.resize(taille);
	va_list listevoide;
	va_start(listevoide,taille);
	
	for(int i =0;i<taille;i++)
	{
		this->tab[i]=va_arg(listevoide,SDL_Surface*);
	}
}

SrfTab::SrfTab(int taille,SDL_Surface* t[])
{/**/
	
	this->tab.resize(taille);
	for(int i =0;i<taille;i++)
	{
		this->tab[i]=t[i];
	}
}

int SrfTab::size()
{
	return this->tab.size();
}

SDL_Surface* SrfTab::get(int indice)
{/**/
	if(indice>=this->size())
	{
		return (SDL_Surface*)NULL;
	}
	return this->tab[indice];
}

void SrfTab::set(int indice, SDL_Surface* i)
{
	if(indice<this->size())
	{
		this->tab[indice]=i;
	}
	
}

void SrfTab::append(SDL_Surface* i)
{
	this->tab.push_back(i);
}

SDL_Surface* SrfTab::pop()
{
	SDL_Surface* res=this->tab[this->tab.size()-1];
	this->tab.pop_back();
	return res;
}

void SrfTab::concatG(SrfTab t)
{
	int newsize=this->size()+t.size();
	this->tab.resize(newsize);
	for(int i=newsize-1;i>=t.size();i--)
	{
		this->set(i,this->get(i-t.size()));
	}
	for(int i=0;i<t.size();i++)
	{
		this->set(i,t.get(i));
	}
}

void SrfTab::concatD(SrfTab t)
{
	int newsize=this->size()+t.size();
	this->tab.resize(newsize);
	for(int i=newsize-t.size();i<newsize;i++)
	{
		this->set(i,t.get(i-newsize+t.size()));
	}
	
}

void SrfTab::del(int indice)
{
	if(indice<this->size())
	{
		for(int i=indice;i<this->size()-1;i++)
		{
			this->set(i,this->get(i+1));
		}
		this->tab.resize(this->size()-1);
	}
}

void SrfTab::resize(int i,SDL_Surface* val)
{/*si grandi, est rempli par val*/
	this->tab.resize(i,val);
}

void SrfTab::resize(int i)
{
	this->tab.resize(i);
}

// STR :

StrTab::StrTab(string s)
{
	
	this->tab.resize(1);
	this->tab[0]=s;
} 

StrTab::StrTab(int taille,string t[])
{
	
	this->tab.resize(taille);
	for(int i =0;i<taille;i++)
	{
		this->tab[i]=t[i];
	}
} 

int StrTab::size()
{
	return this->tab.size();
}

string StrTab::get(int indice)
{/**/
	if(indice>=this->size())
	{
		return (string)NULL;
	}
	return this->tab[indice];
}

void StrTab::set(int indice, string i)
{
	if(indice<this->size())
	{
		this->tab[indice]=i;
	}
	
}

void StrTab::append(string i)
{
	this->tab.push_back(i);
}

string StrTab::pop()
{
	string res=this->tab[this->tab.size()-1];
	this->tab.pop_back();
	return res;
}

void StrTab::concatG(StrTab t)
{
	int newsize=this->size()+t.size();
	this->tab.resize(newsize);
	for(int i=newsize-1;i>=t.size();i--)
	{
		this->set(i,this->get(i-t.size()));
	}
	for(int i=0;i<t.size();i++)
	{
		this->set(i,t.get(i));
	}
}

void StrTab::concatD(StrTab t)
{
	int newsize=this->size()+t.size();
	this->tab.resize(newsize);
	for(int i=newsize-t.size();i<newsize;i++)
	{
		this->set(i,t.get(i-newsize+t.size()));
	}
	
}

void StrTab::del(int indice)
{
	if(indice<this->size())
	{
		for(int i=indice;i<this->size()-1;i++)
		{
			this->set(i,this->get(i+1));
		}
		this->tab.resize(this->size()-1);
	}
}

void StrTab::resize(int i,string val)
{/*si grandi, est rempli par val*/
	this->tab.resize(i,val);
}

void StrTab::resize(int i)
{
	this->tab.resize(i);
}

void StrTab::plusegal(int indice,string straconcat)
{
	this->set(indice,this->get(indice)+straconcat);
}

void StrTab::plusegal(int indice,char characoncat)
{
	this->set(indice,this->get(indice)+characoncat);
}

//ITEM/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////OOOOOOOOOOOO
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
button::button(Fenetre *f,string id,string texte,void(*action)(Fenetre *),int x,int y,string filePolice,int taillePolice,
int alphafond,int Rfond,int Vfond, int Bfond,int alphatexte,int Rtexte,int Vtexte, int Btexte,int ajustTextX,int ajustTextY)
{
	this->f=f;
	if(f->allButtonsList.find(id)!=f->allButtonsList.end())f->allButtonsList[id]->freeButton();
	f->allButtonsList[id]=this;
	this->id=id;
	this->texte=new item(f,"texte_du_bouton_"+id,0,x+ajustTextX,y+ajustTextY,{""});
	this->texte->addApparence("base",texte,filePolice,taillePolice,alphatexte,Rtexte,Vtexte,Btexte);
	int w0=0,h0=0;
	for(int i=0;i<this->texte->ecrs["base"].posLignes.size();i++)
	{
		w0=max(w0,this->texte->ecrs["base"].posLignes[i].w);
	}
	h0=this->texte->ecrs["base"].posLignes[0].h*this->texte->ecrs["base"].posLignes.size()*0.80;
	this->fond=new item(f,"fond_du_bouton_"+id,1,x,y,{""});
	this->fond->addApparence("base",w0,h0,alphafond,Rfond,Vfond,Bfond);
	this->action=action;
	f->blit(this->fond);
	f->blit(this->texte);
}
void button::freeButton()
{
	texte->freeItem();
	fond->freeItem();
	f->allButtonsList.erase(id);
	delete this;
}
entry::entry(Fenetre *f,string id,int nbChar,string texteDefaut,void(*enterAction)(Fenetre *),int x,int y,
string filePolice,int taillePolice,
int alphafond,int Rfond,int Vfond, int Bfond,int alphatexte,int Rtexte,int Vtexte, int Btexte,int ajustTextX,int ajustTextY)
{
	this->f=f;
	if(f->allEntriesList.find(id)!=f->allEntriesList.end())f->allEntriesList[id]->freeEntry();
	f->allEntriesList[id]=this;
	this->id=id;
	this->nbChar=nbChar;
	this->actif=0;
	
	this->infosTexte={"",filePolice,taillePolice,alphatexte,Rtexte,Vtexte,Btexte};
	this->texte=new item(f,"texte_de_lentree_"+id,0,x+ajustTextX,y+ajustTextY,{""});
	this->texte->addApparence("defaut",this->creerTexte(texteDefaut),filePolice,taillePolice,alphatexte,
	Rtexte+(255-Rtexte)/2,Vtexte+(255-Vtexte)/2,Btexte+(255-Btexte)/2);
	this->texte->addApparence("base",this->creerTexte(""),filePolice,taillePolice,alphatexte,Rtexte,Vtexte,Btexte);

	int w0=0,h0=0;
	for(int i=0;i<this->texte->ecrs["defaut"].posLignes.size();i++)
	{
		w0=max(w0,this->texte->ecrs["defaut"].posLignes[i].w);
	}
	h0=this->texte->ecrs["defaut"].posLignes[0].h*this->texte->ecrs["defaut"].posLignes.size()*0.80;
	this->fond=new item(f,"fond_de_lentree_"+id,1,x,y,{""});
	this->fond->addApparence("base",w0,h0,alphafond,Rfond,Vfond,Bfond);
	this->enterAction=enterAction;
	f->blit(this->fond);
	f->blit(this->texte);
}
string entry::creerTexte(string texte)
{
	int nbEspaces=this->nbChar-texte.size();
	string res="";
	if(nbEspaces>=0)
	{
		res=texte;
		for(int i=0;i<nbEspaces;i++)
		{
			res+=" ";
		}
		return res;
	}
	else
	{
		for(int i=-nbEspaces;i<texte.size();i++)
		{
			res+=texte[i];
		}
		return res;
	}
}
string entry::get()
{
	return this->infosTexte.texte;
}
void entry::freeEntry()
{
	if (f->entreeActive==this)f->entreeActive=NULL;
	texte->freeItem();
	fond->freeItem();
	f->allEntriesList.erase(id);
	delete this;
}
item::item(Fenetre *f,string id,int plan,int x,int y,vector<string> classesObstacles)
{
	
	this->f=f;
	if(f->allItemsList.find(id)!=f->allItemsList.end())f->allItemsList[id]->freeItem();
	f->allItemsList[id]=this;
	this->id=id;
	etat.blited=0;
	this->etat.plan=plan;
	this->etat.rect.x=x;
	this->etat.floatRect.x=x;
	this->etat.rect.y=y;
	this->etat.floatRect.y=y;
	this->etat.rect.w=0;
	this->etat.floatRect.w=0;
	this->etat.rect.h=0;
	this->etat.floatRect.h=0;
	this->etat.typeApparence='n'; 
	this->etat.idApparence=""; 
	this->etat.classesObstacles=classesObstacles;
	this->etat.vitesse.vx=0;
	this->etat.vitesse.vy=0;
}

void item::changerPlan(int plan)
{
	if(etat.blited==1)
	{
		f->blitList[etat.plan].erase(id);
		this->etat.plan=plan;
		f->blitList[etat.plan][id]=this;
	}
	else
	{
		this->etat.plan=plan;
	}
	
}
void item::changerApparence(char typeApparence,string idApparence)
{
	if(typeApparence=='i')
	{
		if(imgs.find(idApparence)!=imgs.end())
		{
			this->etat.typeApparence=typeApparence;
			this->etat.idApparence=idApparence;
		}
	}
	else if(typeApparence=='a')
	{
		if(anis.find(idApparence)!=anis.end())
		{
			this->etat.typeApparence=typeApparence;
			this->etat.idApparence=idApparence;
		}
	}
	else if(typeApparence=='e')
	{
		if(ecrs.find(idApparence)!=ecrs.end())
		{
			this->etat.typeApparence=typeApparence;
			this->etat.idApparence=idApparence;
		}
	}
}

void item::changerRect(int x,int y, int w, int h)
{
	SDL_Rect newRect={x,y,w,h};
	floatRectToken newFloatRect={x,y,w,h};
	this->etat.rect=newRect;
	this->etat.floatRect=newFloatRect;
}
void item::changerVitesseXY(float vx, float vy)
{
	this->etat.vitesse.vx=vx;
	this->etat.vitesse.vy=vy;
}
void item::changerVitesseX(float vx)
{
	this->etat.vitesse.vx=vx;
}
void item::changerVitesseY(float vy)
{
	this->etat.vitesse.vy=vy;
}
void item::accelerer(float ax, float ay)
{
	this->etat.vitesse.vx+=ax/f->currFps;
	this->etat.vitesse.vy+=ay/f->currFps;
}


void item::addApparence(string id,int w,int h,int alpha,int R,int V,int B)
{
	string file=ItoS(w)+ItoS(h)+ItoS(R)+ItoS(V)+ItoS(B);
	int troncat=0;
	if(this->etat.typeApparence=='n')
	{
		this->etat.typeApparence='i'; 
		this->etat.idApparence=id; 
	}
	if(imgs.find(id)!=imgs.end())
	{
		delApparencePourRemplacement('i',id);
	}
	SDL_Texture* textu;
	pair<string,int> atester(file,alpha);
	if(f->texturesChargees.find(atester)==f->texturesChargees.end())
	{
		SDL_Surface*surf=SDL_CreateRGBSurface(0,w,h,32,0,0,0,0);
		SDL_FillRect(surf,NULL,SDL_MapRGB(surf->format,R,V,B));
		textu=SDL_CreateTextureFromSurface(f->renderer,surf);
		SDL_FreeSurface(surf);
		if(alpha<255)
		{
			SDL_SetTextureBlendMode(textu,SDL_BLENDMODE_BLEND);
			SDL_SetTextureAlphaMod(textu,alpha);
		}
		
		f->texturesChargees[atester].texture=textu;
		f->texturesChargees[atester].nbUtilisations=1;
	}
	else
	{
		f->texturesChargees[atester].nbUtilisations+=1;
	}
	
	SDL_QueryTexture(f->texturesChargees[atester].texture,NULL,NULL,&(this->etat.rect.w),&(this->etat.rect.h));
	this->imgs[id]={f->texturesChargees[atester].texture,troncat};
	
}// (RECT FILLED)
void item::addApparence(string id,string file,int troncat,int alpha,int R,int V,int B)
{
	if(this->etat.typeApparence=='n')
	{
		this->etat.typeApparence='i'; 
		this->etat.idApparence=id; 
	}
	if(imgs.find(id)!=imgs.end())
	{
		delApparencePourRemplacement('i',id);
	}
	SDL_Texture* textu;
	pair<string,int> atester(file,alpha);
	if(f->texturesChargees.find(atester)==f->texturesChargees.end())
	{
		SDL_Surface*surf=SDL_LoadBMP(file.c_str());
		if(R!=-1)
		{
			SDL_SetColorKey(surf, SDL_TRUE, SDL_MapRGB(surf->format,R,V,B));
		}
		textu=SDL_CreateTextureFromSurface(f->renderer,surf);
		SDL_FreeSurface(surf);
		if(alpha<255)
		{
			SDL_SetTextureBlendMode(textu,SDL_BLENDMODE_BLEND);
			SDL_SetTextureAlphaMod(textu,alpha);
		}
		
		f->texturesChargees[atester].texture=textu;
		f->texturesChargees[atester].nbUtilisations=1;
	}
	else
	{
		f->texturesChargees[atester].nbUtilisations+=1;
	}
	
	SDL_QueryTexture(f->texturesChargees[atester].texture,NULL,NULL,&(this->etat.rect.w),&(this->etat.rect.h));
	this->imgs[id]={f->texturesChargees[atester].texture,troncat};
	
}//img
void item::addApparence(string id,vector<string> files,vector<int>durees,vector<int> troncats,vector<int> alphas,int R,int V,int B)
{
	if(this->etat.typeApparence=='n')
	{
		this->etat.typeApparence='a'; 
		this->etat.idApparence=id; 
	}
	if(anis.find(id)!=anis.end())
	{
		delApparencePourRemplacement('a',id);
	}
	SDL_Texture* textu;
	int nbFrames=min(files.size(),min(troncats.size(),alphas.size()));
	for(int i=0;i<nbFrames;i++)
	{
		pair<string,int> atester(files[i],alphas[i]);
		if(f->texturesChargees.find(atester)==f->texturesChargees.end())
		{
			SDL_Surface*surf=SDL_LoadBMP(files[i].c_str());
			if(R!=-1)
			{
			
				SDL_SetColorKey(surf, SDL_TRUE, SDL_MapRGB(surf->format,R,V,B));
			}
			textu=SDL_CreateTextureFromSurface(f->renderer,surf);
			SDL_FreeSurface(surf);
		
			if(alphas[i]<255)
			{
				
				SDL_SetTextureBlendMode(textu,SDL_BLENDMODE_BLEND);
				SDL_SetTextureAlphaMod(textu,alphas[i]);
			}
			f->texturesChargees[atester].texture=textu;
			f->texturesChargees[atester].nbUtilisations=1;
			
		}
		else
		{
			f->texturesChargees[atester].nbUtilisations+=1;
		}
		if(i==0)
		{
			SDL_QueryTexture(f->texturesChargees[atester].texture,NULL,NULL,&(this->etat.rect.w),&(this->etat.rect.h));
			vector<SDL_Texture*> textures={f->texturesChargees[atester].texture};
			this->anis[id]={textures,durees,troncats};
		}
		else
		{
			this->anis[id].textures.push_back(f->texturesChargees[atester].texture);
		}
		
	}
}//ani
void item::addApparence(string id,string texte,string fileTTF,int taille,int alpha,int R,int V,int B)
{
	if(this->etat.typeApparence=='n')
	{
		this->etat.typeApparence='e'; 
		this->etat.idApparence=id; 
	}
	if(ecrs.find(id)!=ecrs.end())
	{
		delApparencePourRemplacement('e',id);
	}
	SDL_Texture* textu;
	SDL_Surface *surf;
	SDL_Rect pos;
	floatRectToken posf;
	TTF_Font *popo= TTF_OpenFont(fileTTF.c_str(), taille);
	SDL_Color couleur={R,V,B};
	StrTab stab("");
	string str=texte;
	int nbLignes=1;
	int indice=0;
	int size=str.size();
	while (indice<size)
	{
		if(str[indice]=='\n')
		{
			
			if(indice!=size-1)
			{
				stab.append("");
				nbLignes++;
			}
			indice++;
		}
		else
		{
			stab.plusegal(nbLignes-1,str[indice]);
			indice++;
		}
	}
	for(int i=0;i<nbLignes;i++)
	{
		pos={this->etat.rect.x,(int)(this->etat.rect.y+i*0.8*taille),0,0};
		posf={this->etat.rect.x,(int)(this->etat.rect.y+i*0.8*taille),0,0};
		surf=TTF_RenderText_Blended(popo,stab.get(i).c_str(),couleur);
		textu=SDL_CreateTextureFromSurface(f->renderer,surf);
		SDL_QueryTexture(textu,NULL,NULL,&(pos.w),&(pos.h));
		if(alpha<255)
		{
			SDL_SetTextureBlendMode(textu,SDL_BLENDMODE_BLEND);
			SDL_SetTextureAlphaMod(textu,alpha);
		}
		if(i==0)
		{
			vector<SDL_Rect> rtemp={pos};
			vector<floatRectToken> rftemp={posf};
			vector<SDL_Texture*>ttemp={textu};
			this->ecrs[id]={ttemp,rtemp,rftemp};
		}
		else
		{
			this->ecrs[id].textures.push_back(textu);
			this->ecrs[id].posLignes.push_back(pos);
			this->ecrs[id].posfLignes.push_back(posf);
		}
	}
	TTF_CloseFont(popo);
	SDL_FreeSurface(surf);
}//ecr
void item::delApparencePourRemplacement(char typeApparence,string idApparence)
{//utilisé seulement en interne par addApparence
	if(typeApparence=='i')
	{
		for(auto  iteratorTextuChargeesToken : f->texturesChargees)
		{
			if(imgs[idApparence].texture==iteratorTextuChargeesToken.second.texture)
			{
				iteratorTextuChargeesToken.second.nbUtilisations-=1;	
				if(iteratorTextuChargeesToken.second.nbUtilisations<=0)
				{
					SDL_DestroyTexture(imgs[idApparence].texture);
					f->texturesChargees.erase(iteratorTextuChargeesToken.first);
				}
				break;
			}
		}
		this->imgs.erase(idApparence);
	}
	else if(typeApparence=='a')
	{
		for(int i=0;i<anis[idApparence].textures.size();i++)
		{
			for(auto  iteratorTextuChargeesToken : f->texturesChargees)
			{
				if(anis[idApparence].textures[i]==iteratorTextuChargeesToken.second.texture)
				{
					iteratorTextuChargeesToken.second.nbUtilisations-=1;	
					if(iteratorTextuChargeesToken.second.nbUtilisations<=0)
					{
						SDL_DestroyTexture(anis[idApparence].textures[i]);
						f->texturesChargees.erase(iteratorTextuChargeesToken.first);
					}
					break;
				}
			}
		}
		this->anis.erase(idApparence);
	}
	else if(typeApparence=='e')
	{
		for(int i =0;i<this->ecrs[idApparence].textures.size();i++)
		{
			SDL_DestroyTexture(this->ecrs[idApparence].textures[i]);
		}
		this->ecrs.erase(idApparence);
	}

}

void item::delApparence(char typeApparence,string idApparence)
{//utilisable en externe car sécurité de pas niquer l'apparence courante
	if(etat.typeApparence!=typeApparence and etat.idApparence!=idApparence)
	{
		if(typeApparence=='i')
		{
			for(auto  iteratorTextuChargeesToken : f->texturesChargees)
			{
				if(imgs[idApparence].texture==iteratorTextuChargeesToken.second.texture)
				{
					iteratorTextuChargeesToken.second.nbUtilisations-=1;	
					if(iteratorTextuChargeesToken.second.nbUtilisations<=0)
					{
						SDL_DestroyTexture(imgs[idApparence].texture);
						f->texturesChargees.erase(iteratorTextuChargeesToken.first);
					}
					break;
				}
			}
			this->imgs.erase(idApparence);
		}
		else if(typeApparence=='a')
		{
			for(int i=0;i<anis[idApparence].textures.size();i++)
			{
				for(auto  iteratorTextuChargeesToken : f->texturesChargees)
				{
					if(anis[idApparence].textures[i]==iteratorTextuChargeesToken.second.texture)
					{
						iteratorTextuChargeesToken.second.nbUtilisations-=1;	
						if(iteratorTextuChargeesToken.second.nbUtilisations<=0)
						{
							SDL_DestroyTexture(anis[idApparence].textures[i]);
							f->texturesChargees.erase(iteratorTextuChargeesToken.first);
						}
						break;
					}
				}
			}
			this->anis.erase(idApparence);
		}
		else if(typeApparence=='e')
		{
			for(int i =0;i<this->ecrs[idApparence].textures.size();i++)
			{
				SDL_DestroyTexture(this->ecrs[idApparence].textures[i]);
			}
			this->ecrs.erase(idApparence);
		}
	}
}

void item::freeItem()
{
	f->unBlit(this);
	for(auto  iteratorImgsToken : this->imgs)
	{
		for(auto  iteratorTextuChargeesToken : f->texturesChargees)
	    {
		    if(iteratorImgsToken.second.texture==iteratorTextuChargeesToken.second.texture)
			{
				iteratorTextuChargeesToken.second.nbUtilisations-=1;	
				if(iteratorTextuChargeesToken.second.nbUtilisations<=0)
				{
					SDL_DestroyTexture(iteratorImgsToken.second.texture);
					f->texturesChargees.erase(iteratorTextuChargeesToken.first);
				}
				break;
			}
	    }
	}
	for(auto  iteratorAnisToken : this->anis)
	{
		for(int i=0;i<iteratorAnisToken.second.textures.size();i++)
		{
			for(auto  iteratorTextuChargeesToken : f->texturesChargees)
			{
			
				if(iteratorAnisToken.second.textures[i]==iteratorTextuChargeesToken.second.texture)
				{
					iteratorTextuChargeesToken.second.nbUtilisations-=1;	
					if(iteratorTextuChargeesToken.second.nbUtilisations<=0)
					{
						SDL_DestroyTexture(iteratorAnisToken.second.textures[i]);
						f->texturesChargees.erase(iteratorTextuChargeesToken.first);
					}
					break;
				}
			}
	    }
	}
	for(auto  iteratorEcrsToken : this->ecrs)
	{
		for(int i=0;i<iteratorEcrsToken.second.textures.size();i++)
		{
			SDL_DestroyTexture(iteratorEcrsToken.second.textures[i]);
	    }
	}
	f->allItemsList.erase(id);
	delete this;
}
void item::move()
{
	if(this->etat.typeApparence=='e')
	{
		for(auto iterator=this->ecrs.begin();iterator!=this->ecrs.end();++iterator)
		{
			for(int i=0;i<iterator->second.posLignes.size();i++)
			{
				iterator->second.posfLignes[i].x+=this->etat.vitesse.vx/(float)f->currFps;
				iterator->second.posfLignes[i].y+=this->etat.vitesse.vy/(float)f->currFps;
				iterator->second.posLignes[i].x=iterator->second.posfLignes[i].x;
				iterator->second.posLignes[i].y=iterator->second.posfLignes[i].y;
			}
		}
	}
	else
	{
		
		this->etat.floatRect.x+=this->etat.vitesse.vx/(float)f->currFps;
		this->etat.floatRect.y+=this->etat.vitesse.vy/(float)f->currFps;
		this->etat.rect.x=this->etat.floatRect.x;
		this->etat.rect.y=this->etat.floatRect.y;
		
	}
}
void item::move(float vx,float vy)
{
	if(this->etat.typeApparence=='e')
	{
		for(auto iterator=this->ecrs.begin();iterator!=this->ecrs.end();++iterator)
		{
			for(int i=0;i<iterator->second.posLignes.size();i++)
			{
				iterator->second.posfLignes[i].x+=vx/(float)f->currFps;
				iterator->second.posfLignes[i].y+=vy/(float)f->currFps;
				iterator->second.posLignes[i].x=iterator->second.posfLignes[i].x;
				iterator->second.posLignes[i].y=iterator->second.posfLignes[i].y;
			}
		}
	}
	else
	{
		this->etat.floatRect.x+=vx/(float)f->currFps;
		this->etat.floatRect.y+=vy/(float)f->currFps;
		this->etat.rect.x=this->etat.floatRect.x;
		this->etat.rect.y=this->etat.floatRect.y;
	}
}
void item::go(float x,float y)
{
	if(this->etat.typeApparence=='e')
	{
		for(auto iterator=this->ecrs.begin();iterator!=this->ecrs.end();++iterator)
		{
			if(iterator->second.posLignes.size()==1)
			{
				iterator->second.posfLignes[0].x=x;
					iterator->second.posfLignes[0].y=y;
					iterator->second.posLignes[0].x=x;
					iterator->second.posLignes[0].y=y;
			}
			else
			{
				int ecart=iterator->second.posfLignes[1].y-iterator->second.posfLignes[0].y;
				for(int i=0;i<iterator->second.posLignes.size();i++)
				{
					iterator->second.posfLignes[i].x=x;
					iterator->second.posfLignes[i].y=y+ecart*i;
					iterator->second.posLignes[i].x=x;
					iterator->second.posLignes[i].y=y+ecart*i;
				}
			}
			
		}
	}
	else
	{
		this->etat.rect.x=x;
		this->etat.floatRect.x=x;
		this->etat.rect.y=y;
		this->etat.floatRect.y=y;
	}
}
void item::moveX(float vx)
{
	if(this->etat.typeApparence=='e')
	{
		for(auto iterator=this->ecrs.begin();iterator!=this->ecrs.end();++iterator)
		{
			for(int i=0;i<iterator->second.posLignes.size();i++)
			{
				iterator->second.posfLignes[i].x+=vx/(float)f->currFps;
		
				iterator->second.posLignes[i].x=iterator->second.posfLignes[i].x;
			
			}
		}
	}
	else
	{
		this->etat.floatRect.x+=vx/(float)f->currFps;
	
		this->etat.rect.x=castInt(this->etat.floatRect.x);

	}
}
void item::moveY(float vy)
{
	if(this->etat.typeApparence=='e')
	{
		for(auto iterator=this->ecrs.begin();iterator!=this->ecrs.end();++iterator)
		{
			for(int i=0;i<iterator->second.posLignes.size();i++)
			{
			
				iterator->second.posfLignes[i].y+=vy/(float)f->currFps;
			
				iterator->second.posLignes[i].y=iterator->second.posfLignes[i].y;
			}
		}
	}
	else
	{
	
		this->etat.floatRect.y+=vy/(float)f->currFps;
		
		this->etat.rect.y=castInt(this->etat.floatRect.y);
	}
}

void item::goX(float x)
{
	if(this->etat.typeApparence=='e')
	{
		for(auto iterator=this->ecrs.begin();iterator!=this->ecrs.end();++iterator)
		{
			if(iterator->second.posLignes.size()==1)
			{
				iterator->second.posfLignes[0].x=x;

					iterator->second.posLignes[0].x=x;

			}
			else
			{
				int ecart=iterator->second.posfLignes[1].y-iterator->second.posfLignes[0].y;
				for(int i=0;i<iterator->second.posLignes.size();i++)
				{
					iterator->second.posfLignes[i].x=x;

					iterator->second.posLignes[i].x=x;
				}
			}
			
		}
	}
	else
	{
		this->etat.rect.x=castInt(x);
		this->etat.floatRect.x=x;
	}
}
void item::goY(float y)
{
	if(this->etat.typeApparence=='e')
	{
		for(auto iterator=this->ecrs.begin();iterator!=this->ecrs.end();++iterator)
		{
			if(iterator->second.posLignes.size()==1)
			{
				
				iterator->second.posfLignes[0].y=y;
				
				iterator->second.posLignes[0].y=y;
			}
			else
			{
				int ecart=iterator->second.posfLignes[1].y-iterator->second.posfLignes[0].y;
				for(int i=0;i<iterator->second.posLignes.size();i++)
				{
					
					iterator->second.posfLignes[i].y=y+ecart*i;
					
					iterator->second.posLignes[i].y=y+ecart*i;
				}
			}
			
		}
	}
	else
	{
		
	
		this->etat.rect.y=castInt(y);
		this->etat.floatRect.y=y;
	}
}
int item::moveAuMax(int vx,int vy,int saveCol)
{

	int colx=0;
	int coly=0;
	int troncat=0,troncat0=0;//par défault (ou ecr);
	colToken col;
	
	if(etat.typeApparence=='i')
	{
		troncat=imgs[etat.idApparence].troncat;
	}	
	else if(etat.typeApparence=='a')
	{
		float relatTime=(int)f->t%sum(anis[etat.idApparence].durees.size(),anis[etat.idApparence].durees);
		int reachres=reach(relatTime,anis[etat.idApparence].durees.size(),anis[etat.idApparence].durees);
		troncat=anis[etat.idApparence].troncats[reachres];
		// troncat=anis[etat.idApparence].troncats[0];
	}
	int vx0,vy0;
	int x,y,w,h,x0,y0,w0,h0;
	int newx=this->etat.floatRect.x+=vx/(float)f->currFps+troncat;
	int newy=this->etat.floatRect.y+=vy/(float)f->currFps+troncat;
	x=etat.rect.x+troncat;
	y=etat.rect.y+troncat;
	w=etat.rect.w-2*troncat;
	h=etat.rect.h-2*troncat;
	
	SDL_Rect rectobs;
	int xGoDeMinMove=newx,yGoDeMinMove=newy;
	
	for(int i=0;i<this->etat.classesObstacles.size();i++)
	{
		for(auto const& iterator : f->obstaclesList[this->etat.classesObstacles[i]])
		{
			if(iterator.second->etat.typeApparence=='i')
			{
				troncat0=iterator.second->imgs[iterator.second->etat.idApparence].troncat;
			}	
			else if(iterator.second->etat.typeApparence=='a')
			{
				float relatTime=(int)f->t%sum(iterator.second->anis[iterator.second->etat.idApparence].durees.size(),
				iterator.second->anis[iterator.second->etat.idApparence].durees);
				int reachres=reach(relatTime,
				iterator.second->anis[iterator.second->etat.idApparence].durees.size(),
				iterator.second->anis[iterator.second->etat.idApparence].durees);
				troncat0=iterator.second->anis[iterator.second->etat.idApparence].troncats[reachres];
			}
			rectobs=iterator.second->etat.rect;
			vx0=iterator.second->etat.vitesse.vx;
			vy0=iterator.second->etat.vitesse.vy;
			x0=rectobs.x+troncat0;
			y0=rectobs.y+troncat0;
			w0=rectobs.w-2*troncat0;
			h0=rectobs.h-2*troncat0;
		
			if(w0!=0 and h0!=0)
			{
			//avoir bon y
				if(y0<=y+h and y<=y0+h0 and vx!=0)
				{
					if(vx>0)
					{
						if(x+w<=x0 and x0<=newx+w)
						{
							if(fabs(xGoDeMinMove-x)>=fabs(x0-x-w))
							{
								xGoDeMinMove=x0-w;
								if(saveCol)
								{
									col.obstacle=iterator.second;
									col.vitesse={vx,vy};
									col.vitesseObstacle={vx0,vy0};
									col.axe='x';
									colList.push_back(col);
								}
								
							}
							colx=1;
						}
					}
					else
					{
						if(x>=x0+w0 and x0+w0>=newx)
						{
							if(fabs(xGoDeMinMove-x)>=fabs(x0+w0-x))
							{
								xGoDeMinMove=x0+w0;
								
								if(saveCol)
								{
									col.obstacle=iterator.second;
									col.vitesse={vx,vy};
									col.vitesseObstacle={vx0,vy0};
									col.axe='x';
									colList.push_back(col);

								}
							}
							colx=1;
							
						}
					}
				}
			}
		}
	
		if (colx==1)
		{
			
			if(vx>0)
			{
				xGoDeMinMove-=1;
			}
			else
			{
				xGoDeMinMove+=1;
			}
		}
		x=xGoDeMinMove;
		
		
		for(auto const& iterator : f->obstaclesList[this->etat.classesObstacles[i]])
		{	
			if(iterator.second->etat.typeApparence=='i')
			{
				troncat0=iterator.second->imgs[iterator.second->etat.idApparence].troncat;
			}	
			else if(iterator.second->etat.typeApparence=='a')
			{
				float relatTime=(int)f->t%sum(iterator.second->anis[iterator.second->etat.idApparence].durees.size(),
				iterator.second->anis[iterator.second->etat.idApparence].durees);
				int reachres=reach(relatTime,
				iterator.second->anis[iterator.second->etat.idApparence].durees.size(),
				iterator.second->anis[iterator.second->etat.idApparence].durees);
				troncat0=iterator.second->anis[iterator.second->etat.idApparence].troncats[reachres];
			}
			rectobs=iterator.second->etat.rect;
			x0=rectobs.x+troncat0;
			y0=rectobs.y+troncat0;
			w0=rectobs.w-2*troncat0;
			h0=rectobs.h-2*troncat0;
			if(w0!=0 and h0!=0)
			{
				if(x0<=x+w and x<=x0+w0 and vy!=0)
				{
					if(vy>0)
					{
						if(y+h<=y0 and y0<=newy+h)
						{
							if(fabs(yGoDeMinMove-y)>=fabs(y0-y-h))
							{
								yGoDeMinMove=y0-h;
								
								if(saveCol)
								{
									col.obstacle=iterator.second;
									col.vitesse={vy,vy};
									col.vitesseObstacle={vy0,vy0};
									col.axe='y';
									colList.push_back(col);
								}
							}
							coly=1;
						}
					}
					else
					{
						if(y>=y0+h0 and y0+h0>=newy)
						{
							if(fabs(yGoDeMinMove-y)>=fabs(y0+h0-y))
							{
								yGoDeMinMove=y0+h0;
								
								if(saveCol)
								{
									col.obstacle=iterator.second;
									col.vitesse={vy,vy};
									col.vitesseObstacle={vy0,vy0};
									col.axe='y';
									colList.push_back(col);
								}
							}
							coly=1;
						}
					}
				}
			}
		}
	}
	
	if(xGoDeMinMove<0 and vx<0)xGoDeMinMove--;
	if(yGoDeMinMove<0 and vy<0)yGoDeMinMove--;
	if (colx==1)
	{
		if(coly==1)
		{
			if(vy>0)
			{
				yGoDeMinMove-=1;
			}
			else
			{
				yGoDeMinMove+=1;
			}
			go(xGoDeMinMove-troncat,yGoDeMinMove-troncat);
		
			return 2;
		}
		else
		{
			go(xGoDeMinMove-troncat,yGoDeMinMove-troncat);
			
			return 1;
		}
	}
	else
	{
		if(coly==1)
		{
			if(vy>0)
			{
				yGoDeMinMove-=1;
			}
			else
			{
				yGoDeMinMove+=1;
			}
			go(xGoDeMinMove-troncat,yGoDeMinMove-troncat);
			
			return -1;
		}
		else
		{
			go(xGoDeMinMove-troncat,yGoDeMinMove-troncat);
			return 0;
		}
		
	}
}

int item::moveAuMax(int saveCol)
{
	
	int colx=0;
	int coly=0;
	int troncat=0,troncat0=0;//par défault (ou ecr);
	colToken col;
	
	if(etat.typeApparence=='i')
	{
		troncat=imgs[etat.idApparence].troncat;
	}	
	else if(etat.typeApparence=='a')
	{
		float relatTime=(int)f->t%sum(anis[etat.idApparence].durees.size(),anis[etat.idApparence].durees);
		int reachres=reach(relatTime,anis[etat.idApparence].durees.size(),anis[etat.idApparence].durees);
		troncat=anis[etat.idApparence].troncats[reachres];
		
	}
	int vx=etat.vitesse.vx;
	int vy=etat.vitesse.vy;
	int vx0,vy0;
	int x,y,w,h,x0,y0,w0,h0;
	int newx=this->etat.floatRect.x+=this->etat.vitesse.vx/(float)f->currFps+troncat;
	int newy=this->etat.floatRect.y+=this->etat.vitesse.vy/(float)f->currFps+troncat;
	x=etat.rect.x+troncat;
	y=etat.rect.y+troncat;
	w=etat.rect.w-2*troncat;
	h=etat.rect.h-2*troncat;
	
	SDL_Rect rectobs;
	int xGoDeMinMove=newx,yGoDeMinMove=newy;
	for(int i=0;i<this->etat.classesObstacles.size();i++)
	{
		for(auto const& iterator : f->obstaclesList[this->etat.classesObstacles[i]])
		{
			if(iterator.second->etat.typeApparence=='i')
			{
				troncat0=iterator.second->imgs[iterator.second->etat.idApparence].troncat;
			}	
			else if(iterator.second->etat.typeApparence=='a')
			{
				float relatTime=(int)f->t%sum(iterator.second->anis[iterator.second->etat.idApparence].durees.size(),
				iterator.second->anis[iterator.second->etat.idApparence].durees);
				int reachres=reach(relatTime,
				iterator.second->anis[iterator.second->etat.idApparence].durees.size(),
				iterator.second->anis[iterator.second->etat.idApparence].durees);
				troncat0=iterator.second->anis[iterator.second->etat.idApparence].troncats[reachres];
			}
			rectobs=iterator.second->etat.rect;
			vx0=iterator.second->etat.vitesse.vx;
			vy0=iterator.second->etat.vitesse.vy;
			x0=rectobs.x+troncat0;
			y0=rectobs.y+troncat0;
			w0=rectobs.w-2*troncat0;
			h0=rectobs.h-2*troncat0;
		
			if(w0!=0 and h0!=0)
			{
			//avoir bon y
				if(y0<=y+h and y<=y0+h0 and vx!=0)
				{
					if(vx>0)
					{
						if(x+w<=x0 and x0<=newx+w)
						{
							if(fabs(xGoDeMinMove-x)>=fabs(x0-x-w))
							{
								xGoDeMinMove=x0-w;
								if(saveCol)
								{
									col.obstacle=iterator.second;
									col.vitesse={vx,vy};
									col.vitesseObstacle={vx0,vy0};
									col.axe='x';
									colList.push_back(col);
								}
								
							}
							colx=1;
						}
					}
					else
					{
						if(x>=x0+w0 and x0+w0>=newx)
						{
							if(fabs(xGoDeMinMove-x)>=fabs(x0+w0-x))
							{
								xGoDeMinMove=x0+w0;
								
								if(saveCol)
								{
									col.obstacle=iterator.second;
									col.vitesse={vx,vy};
									col.vitesseObstacle={vx0,vy0};
									col.axe='x';
									colList.push_back(col);

								}
							}
							colx=1;
							
						}
					}
				}
			}
		}
	
		if (colx==1)
		{
			
			if(vx>0)
			{
				xGoDeMinMove-=1;
			}
			else
			{
				xGoDeMinMove+=1;
			}
		}
		x=xGoDeMinMove;
		
		
		for(auto const& iterator : f->obstaclesList[this->etat.classesObstacles[i]])
		{	
			if(iterator.second->etat.typeApparence=='i')
			{
				troncat0=iterator.second->imgs[iterator.second->etat.idApparence].troncat;
			}	
			else if(iterator.second->etat.typeApparence=='a')
			{
				float relatTime=(int)f->t%sum(iterator.second->anis[iterator.second->etat.idApparence].durees.size(),
				iterator.second->anis[iterator.second->etat.idApparence].durees);
				int reachres=reach(relatTime,
				iterator.second->anis[iterator.second->etat.idApparence].durees.size(),
				iterator.second->anis[iterator.second->etat.idApparence].durees);
				troncat0=iterator.second->anis[iterator.second->etat.idApparence].troncats[reachres];
			}
			rectobs=iterator.second->etat.rect;
			x0=rectobs.x+troncat0;
			y0=rectobs.y+troncat0;
			w0=rectobs.w-2*troncat0;
			h0=rectobs.h-2*troncat0;
			if(w0!=0 and h0!=0)
			{
				if(x0<=x+w and x<=x0+w0 and vy!=0)
				{
					if(vy>0)
					{
						if(y+h<=y0 and y0<=newy+h)
						{
							if(fabs(yGoDeMinMove-y)>=fabs(y0-y-h))
							{
								yGoDeMinMove=y0-h;
								
								if(saveCol)
								{
									col.obstacle=iterator.second;
									col.vitesse={vy,vy};
									col.vitesseObstacle={vy0,vy0};
									col.axe='y';
									colList.push_back(col);
								}
							}
							coly=1;
						}
					}
					else
					{
						if(y>=y0+h0 and y0+h0>=newy)
						{
							if(fabs(yGoDeMinMove-y)>=fabs(y0+h0-y))
							{
								yGoDeMinMove=y0+h0;
								
								if(saveCol)
								{
									col.obstacle=iterator.second;
									col.vitesse={vy,vy};
									col.vitesseObstacle={vy0,vy0};
									col.axe='y';
									colList.push_back(col);
								}
							}
							coly=1;
						}
					}
				}
			}
		}
	}
	
	if(xGoDeMinMove<0 and vx<0)xGoDeMinMove--;
	if(yGoDeMinMove<0 and vy<0)yGoDeMinMove--;
	if (colx==1)
	{
		if(coly==1)
		{
			if(vy>0)
			{
				yGoDeMinMove-=1;
			}
			else
			{
				yGoDeMinMove+=1;
			}
			go(xGoDeMinMove-troncat,yGoDeMinMove-troncat);
		
			return 2;
		}
		else
		{
			go(xGoDeMinMove-troncat,yGoDeMinMove-troncat);
			
			return 1;
		}
	}
	else
	{
		if(coly==1)
		{
			if(vy>0)
			{
				yGoDeMinMove-=1;
			}
			else
			{
				yGoDeMinMove+=1;
			}
			go(xGoDeMinMove-troncat,yGoDeMinMove-troncat);
			
			return -1;
		}
		else
		{
			
			 go(xGoDeMinMove-troncat,yGoDeMinMove-troncat);
			return 0;
		}
		
	}
}

colToken item::nextCol()
{
	if(colList.size())
	{
		colToken nextcol=colList.back();
		colList.pop_back();
		return nextcol;
	}
	else
	{
		colToken nextcol={NULL,{0,0},{0,0},'n'};
		return nextcol;
	}
}
//FENETRE///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////o.

Fenetre::Fenetre(int l,int h,char *title,int posx,int posy,int nbPlans,void (*fStart)(Fenetre *f),int fpsMax,int fullscreen)
{/**/
	scanCodeToChar[20]='a';
	scanCodeToChar[26]='z';
	scanCodeToChar[8]='e';
	scanCodeToChar[21]='r';
	scanCodeToChar[23]='t';
	scanCodeToChar[28]='y';
	scanCodeToChar[24]='u';
	scanCodeToChar[12]='i';
	scanCodeToChar[18]='o';
	scanCodeToChar[19]='p';
	scanCodeToChar[4]='q';
	scanCodeToChar[22]='s';
	scanCodeToChar[7]='d';
	scanCodeToChar[9]='f';
	scanCodeToChar[10]='g';
	scanCodeToChar[11]='h';
	scanCodeToChar[13]='j';
	scanCodeToChar[14]='k';
	scanCodeToChar[15]='l';
	scanCodeToChar[51]='m';
	scanCodeToChar[29]='w';
	scanCodeToChar[27]='x';
	scanCodeToChar[6]='c';
	scanCodeToChar[25]='v';
	scanCodeToChar[5]='b';
	scanCodeToChar[17]='n';
	scanCodeToChar[98]='0';
	scanCodeToChar[89]='1';
	scanCodeToChar[90]='2';
	scanCodeToChar[91]='3';
	scanCodeToChar[92]='4';
	scanCodeToChar[93]='5';
	scanCodeToChar[94]='6';
	scanCodeToChar[95]='7';
	scanCodeToChar[96]='8';
	scanCodeToChar[97]='9';
	scanCodeToChar[44]=' ';
	scanCodeToChar[40]='\n';
	scanCodeToChar[86]='-';
	this->buttonPushed=0;
	this->entreeActive=NULL;
	this->posBG={0,0,l,h};
	this->e=(SDL_Event *)malloc(sizeof(SDL_Event));
	this->fpsMax=fpsMax;
	this->currFps=fpsMax;
	this->conti=1;
	this->t= SDL_GetTicks();
	this->largeur=l;
	this->hauteur=h;
	this->titre=title;
	this->addAction(fStart,1);
	
	this->nbPlans=max(2,nbPlans);
	blitList.resize(this->nbPlans);
	if(fullscreen)
	{
		SDL_Init( SDL_INIT_VIDEO);
		this->window = SDL_CreateWindow(this->titre,SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,0, 0, SDL_WINDOW_FULLSCREEN_DESKTOP);
		Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS,1024);
		Mix_VolumeMusic(MIX_MAX_VOLUME / 2);
		TTF_Init();
		this->renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_TARGETTEXTURE|SDL_RENDERER_PRESENTVSYNC);
		SDL_SetRenderDrawColor(this->renderer , 0, 0, 0, 255); 

		SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
		SDL_RenderSetLogicalSize(renderer, l, h);
	}
	else
	{
		SDL_Init( SDL_INIT_VIDEO);
		this->window = SDL_CreateWindow(this->titre,  posx, posy, l, h, 0);
		Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS,1024);
		Mix_VolumeMusic(MIX_MAX_VOLUME / 2);
		TTF_Init();
		this->renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
		SDL_SetRenderDrawColor(this->renderer , 0, 0, 0, 255); 
	}
}

int Fenetre::nextEvent(int flag)
{
	int res=SDL_PollEvent(this->e);
	if(!flag)
	{
		while(res==1 and this->e->type==SDL_MOUSEMOTION)
		{
			res=SDL_PollEvent(this->e);
		}	
	}
	if(e->type==SDL_MOUSEBUTTONDOWN)
	{
		this->buttonPushed=0;
	}
	if(e->type==SDL_MOUSEBUTTONUP)
	{
		int x0=e->button.x;
		int y0=e->button.y;
		int xb,yb,wb,hb;
		if(buttonPushed==0)
		{
			this->buttonPushed=1;
			
			for(auto iterator :allButtonsList)
			{
				xb=iterator.second->fond->etat.rect.x;
				yb=iterator.second->fond->etat.rect.y;
				wb=iterator.second->fond->etat.rect.w;
				hb=iterator.second->fond->etat.rect.h;
				if(xb<=x0 and x0<=xb+wb and yb<=y0 and y0<=yb+hb)
				{
					iterator.second->action(this);
					break;
				}
			}
		}
		
		for(auto iterator2 :allEntriesList)
		{
			xb=iterator2.second->fond->etat.rect.x;
			yb=iterator2.second->fond->etat.rect.y;
			wb=iterator2.second->fond->etat.rect.w;
			hb=iterator2.second->fond->etat.rect.h;
			if(xb<=x0 and x0<=xb+wb and yb<=y0 and y0<=yb+hb)
			{
				iterator2.second->actif=1;
				if(entreeActive!=NULL)
				{
					entreeActive->actif=0;
				}
				entreeActive=iterator2.second;
				entreeActive->texte->changerApparence('e',"base");
				break;
			}
		}
	}
	if(this->entreeActive!=NULL)
	{//desactivation
		if(e->type==SDL_MOUSEBUTTONUP)
		{
			int x0=e->button.x;
			int y0=e->button.y;
			int xb,yb,wb,hb;
			xb=entreeActive->fond->etat.rect.x;
			yb=entreeActive->fond->etat.rect.y;
			wb=entreeActive->fond->etat.rect.w;
			hb=entreeActive->fond->etat.rect.h;
			if(!(xb<=x0 and x0<=xb+wb and yb<=y0 and y0<=yb+hb))
			{
				entreeActive->actif=0;
				entreeActive=NULL;
			}
		}
		if(this->entreeActive!=NULL)
		{
			if(e->type==SDL_KEYDOWN)
			{
				if(e->key.keysym.scancode==40)//Enter
				{
					entreeActive->enterAction(this);
				}
				else if(scanCodeToChar.find(e->key.keysym.scancode)!=scanCodeToChar.end())
				{
					entreeActive->infosTexte.texte+=this->scanCodeToChar[e->key.keysym.scancode];
					entreeActive->texte->addApparence("base",
					entreeActive->creerTexte(entreeActive->infosTexte.texte),
					entreeActive->infosTexte.filePolice,entreeActive->infosTexte.taillePolice,entreeActive->infosTexte.alphatexte,
					entreeActive->infosTexte.Rtexte,entreeActive->infosTexte.Vtexte,entreeActive->infosTexte.Btexte);
					int w0=0,h0=0;
					for(int i=0;i<entreeActive->texte->ecrs["base"].posLignes.size();i++)
					{
						w0=max(w0,entreeActive->texte->ecrs["base"].posLignes[i].w);
					}
					h0=entreeActive->texte->ecrs["base"].posLignes[0].h*entreeActive->texte->ecrs["base"].posLignes.size()*0.80;
					entreeActive->fond->etat.rect.w=w0;
					entreeActive->fond->etat.rect.h=h0;
				}
				else if(e->key.keysym.scancode==42 and entreeActive->infosTexte.texte.size()!=0)//return
				{
					entreeActive->infosTexte.texte.pop_back();
					entreeActive->texte->addApparence("base",
					entreeActive->creerTexte(entreeActive->infosTexte.texte),
					entreeActive->infosTexte.filePolice,entreeActive->infosTexte.taillePolice,entreeActive->infosTexte.alphatexte,
					entreeActive->infosTexte.Rtexte,entreeActive->infosTexte.Vtexte,entreeActive->infosTexte.Btexte);
					int w0=0,h0=0;
					for(int i=0;i<entreeActive->texte->ecrs["base"].posLignes.size();i++)
					{
						w0=max(w0,entreeActive->texte->ecrs["base"].posLignes[i].w);
					}
					h0=entreeActive->texte->ecrs["base"].posLignes[0].h*entreeActive->texte->ecrs["base"].posLignes.size()*0.80;
					entreeActive->fond->etat.rect.w=w0;
					entreeActive->fond->etat.rect.h=h0;
				}
			}
			e->type=SDL_USEREVENT;
		}
	}
	if (e->type==SDL_QUIT){this->finMainLoop();return 0;}
	return res;
	
}

void Fenetre::resetImgs()
{
	for(int i=0;i<nbPlans;i++)
	{
		blitList[i].clear();
	}
	obstaclesList.clear();
}
void Fenetre::resetActions()
{
	actionsList.clear();
}

void Fenetre::setFpsMax(float  fpsMax)
{
	this->fpsMax=fpsMax;
}
void Fenetre::setBG(char* s,int alpha=255)
{
	SDL_DestroyTexture(this->BG);
	SDL_Surface *surf=SDL_LoadBMP(s);
	this->BG=SDL_CreateTextureFromSurface(this->renderer,surf);
	if(alpha<255)
	{
		SDL_SetTextureBlendMode(this->BG,SDL_BLENDMODE_BLEND);
		SDL_SetTextureAlphaMod(this->BG,alpha);
	}
	SDL_FreeSurface(surf);
}



void Fenetre::addAction(void (*f)(Fenetre *fen),int init)
{
	actionsList[f]=init;
}
void Fenetre::delAction(void (*f)(Fenetre *fen))
{
	actionsList.erase(f);
	actionsListCopie.erase(f);
}

void Fenetre::blit(item *it)
{
	it->etat.blited=1;
	blitList[it->etat.plan][it->id]=it;
	if(it->etat.classesObstacles[0]!="")
	{
		for(int i=0;i<it->etat.classesObstacles.size();i++)
		{
			obstaclesList[it->etat.classesObstacles[i]][it->id]=it;
		}
	}
}
void Fenetre::addObstacleInvisible(item *it)
{
	if(it->etat.classesObstacles[0]!="")
	{
		for(int i=0;i<it->etat.classesObstacles.size();i++)
		{
			obstaclesList[it->etat.classesObstacles[i]][it->id]=it;
		}
	}
}
void Fenetre::delObstacleInvisible(item *it)
{
	for(int i=0;i<it->etat.classesObstacles.size();i++)
	{
		obstaclesList[it->etat.classesObstacles[i]].erase(it->id);
	}

}
void Fenetre::unBlit(item *it)
{
	for(int i=0;i<it->etat.classesObstacles.size();i++)
	{
		obstaclesList[it->etat.classesObstacles[i]].erase(it->id);
	}
	for(int i=0;i<nbPlans;i++)
	{
		blitList[i].erase(it->id);
	}
	it->etat.blited=0;
	
}
void Fenetre::deleteAlls()
{
	auto  button0= allButtonsList.begin();
	while (allButtonsList.size()>0)
	{
	    button0= allButtonsList.begin();
		button0->second->freeButton();
	}
	auto  entry0= allEntriesList.begin();
	while (allEntriesList.size()>0)
	{
	    entry0= allEntriesList.begin();
		entry0->second->freeEntry();
	}
	auto item0= allItemsList.begin();
	while (allItemsList.size()>0)
	{
	    item0= allItemsList.begin();
		item0->second->freeItem();
	}
}
void Fenetre::loopActions()
{
	actionsListCopie=actionsList;
	auto action= actionsListCopie.begin();
	while (actionsListCopie.size()>0)
	{
		action= actionsListCopie.begin();
		actionsListCopie.erase(action);
		(action->first)(this);	
	}
}

void Fenetre::loopBlit()
{/**/
	SDL_RenderClear(this->renderer);
	 
	SDL_RenderCopy(this->renderer, this->BG, NULL,&posBG);
	item *currItem;
	for(int i=nbPlans-1;i>=0;i--)
	{
		for(auto itemIter : blitList[i])
		{
			currItem=itemIter.second;
			
			if(currItem->etat.typeApparence=='i')
			{
				SDL_Texture *currTextu=currItem->imgs[currItem->etat.idApparence].texture;
				
				SDL_RenderCopy(this->renderer,currTextu,NULL,&currItem->etat.rect);
			}
			else if(currItem->etat.typeApparence=='a')
			{
				anisToken currAni=currItem->anis[currItem->etat.idApparence];
				
				float relatTime=(int)this->t%sum(currAni.durees.size(),currAni.durees);
				
				int reachres=reach(relatTime,currAni.durees.size(),currAni.durees);
				
				SDL_RenderCopy(this->renderer,currAni.textures[reachres],NULL,&currItem->etat.rect);
			
			}
			
			else if(currItem->etat.typeApparence=='e')
			{
				ecrsToken currEcr=currItem->ecrs[currItem->etat.idApparence];
				
				for(int i=0;i<currEcr.textures.size();i++)
				{
					SDL_RenderCopy(this->renderer,currEcr.textures[i],NULL,&currEcr.posLignes[i]);
				}
			}
			else
			{
				cout<<"erreur : il y a un truc sans apparence active dans blitList... ->"<<currItem->id<<endl;
			}
		}
	}
	SDL_RenderPresent(this->renderer);
}

void Fenetre::quit()
{/*finMainloop l'utilise donc pas besoin de l'utiliser en dehors*/
	
	Mix_CloseAudio();
	TTF_Quit();
	SDL_Quit();
}


void Fenetre::mainLoop()
{/**/
	
	while (this->conti)
	{
		if (SDL_GetTicks()-this->t>=1000.0/(float)this->currFps)
		{
			this->t=SDL_GetTicks();
			this->loopBlit();
			this->loopActions();
			// dureeLoopBlit=SDL_GetTicks()-dureeLoopBlit;
			this->currFps=min(fpsMax,1000/(SDL_GetTicks()-this->t));
		}
	}

	
	this->quit();
}

void Fenetre::finMainLoop()
{/**/
	this->conti=0;
}









