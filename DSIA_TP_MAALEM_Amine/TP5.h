#pragma once
#include<vector>
#include<string>
#include<iostream>
class Instru
{
    std::string name;
    double bPrice;
    double sPrice;
public:
    Instru(std::string name = "none", double bPrice = 0, double sPrice = 0);
    std::string getName();
    void setName(std::string name);
    double getBuyRice();
    void setBuyPrice(double price);
    double getSellPrice();
    void setSellPrice(double price);
    virtual~Instru();
    virtual void affiche() = 0;
    void afficherName();
};

class InstruCords : public Instru
{
    double largueur;
    double longueur;

public:
    InstruCords(double largueur = 0, double longueur = 0);
    double getLargueur();
    void setLargueur(double largueur);
    double getLongueur();
    void setLongueur(double largueur);
    virtual ~InstruCords();
    virtual void affiche() = 0;
};
class InstruVent : public Instru
{

    int numType;
public:
    InstruVent(int type = 0);
    int getNumType();
    void setNumType(int type);
    virtual ~InstruVent();
    virtual void affiche() = 0;
};
class Piano : public InstruCords
{
    int nTouches;
public:
    int getnTouche();
    void setnTouche(int nTouches);
    virtual ~Piano();
    virtual void affiche() = 0;
    void afficherP();
};
class numPiano : public Piano
{
    bool toucheLourd;
    int quaEchan;//de 1 a 3
public:
    bool getToucheLourd();
    void setToucheLourd(bool toucheLourd);
    bool getQuaEchan();
    void setQuaEchan(bool quaEchan);
    virtual ~numPiano();
    virtual void affiche();
};
class droitPiano : public Piano
{
    bool silencieux;
public:
    bool getSilencieux();
    void setSilencieux(bool silencieux);
    virtual ~droitPiano();
    virtual void affiche();
};

class Guitare : public InstruCords
{
    bool DroitGau;//true ou 1 =>droit et //false ou 0=>gauche
public:
    bool getDroitGau();
    void setDroitGau(bool DroitGau);
    virtual ~Guitare();
    virtual void affiche() = 0;
};
class GuitareElec : public Guitare
{
    bool ampli;
    bool pedale;
public:
    bool getAmpli();
    void setAmpli(bool ampli);
    bool getPedale();
    void setPedale(bool pedale);
    virtual ~GuitareElec();
    virtual void affiche();

};
class GuitareAcous : public Guitare
{
    int tirantSymbolise;
public:
    int getTirantSymbolise();
    void setTirantSymbolise(int tirantSymbolise);
    virtual ~GuitareAcous();
    virtual void affiche();
};
class fluteTra : public InstruVent
{
    bool trille;
    int qualite;
public:
    bool getTrille();
    void setTrille(bool trille);
    int getQualite();
    void setQualite(int qualite);
    virtual ~fluteTra();
    virtual void affiche();
};
//on peut metre les atribut de fluteTera en protected est metre que
//hautbois est la fille de flute tra
class hautbois : public InstruVent
{
    bool trille;
    int qualite;
public:
    bool getTrille();
    void setTrille(bool trille);
    int getQualite();
    void setQualite(int qualite);
    virtual ~hautbois();
    virtual void affiche();
};
class clarinette : public InstruVent
{
    static std::string typeNom[3];
    int numType;
public:
    int getNumType();
    void setNumType(int numType);
    std::string getTypeNom(int numType);
    virtual ~clarinette();
    virtual void affiche();
};

void Fiche_Technique(Instru& inst);
void ExuctionTp5(int& valeurTmp);
