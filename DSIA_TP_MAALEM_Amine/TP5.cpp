#include"TP5.h"


    Instru::Instru(std::string name , double bPrice , double sPrice )
    {
        this->name = name;
        this->bPrice = bPrice;
        this->sPrice = sPrice;
    }
    std::string Instru::getName()
    {
        return name;
    }
    void Instru::setName(std::string name)
    {
        this->name = name;
    }
    double Instru::getBuyRice()
    {
        return bPrice;
    }
    void Instru::setBuyPrice(double price)
    {
        bPrice = price;
    }
    double Instru::getSellPrice()
    {
        return sPrice;
    }
    void Instru::setSellPrice(double price)
    {
        sPrice = price;
    }
    Instru::~Instru()
    {
    }
    void Instru::afficherName()
    {
        std::cout << "Name : " << name << std::endl;
        std::cout << "buying price : " << bPrice << std::endl;
        std::cout << "selling price : " << sPrice << std::endl;
    }


    InstruCords ::InstruCords(double largueur , double longueur)
    {
        this->largueur = largueur;
        this->longueur = longueur;
    }
    double InstruCords::getLargueur()
    {
        return largueur;
    }
    void InstruCords::setLargueur(double largueur)
    {
        this->largueur = largueur;
    }
    double InstruCords::getLongueur()
    {
        return longueur;
    }
    void InstruCords::setLongueur(double largueur)
    {
        this->longueur = longueur;
    }
    InstruCords::~InstruCords()
    {
    }

    InstruVent::InstruVent(int type )
    {
        this->numType = type;
    }
    int InstruVent::getNumType()
    {
        return numType;
    }
    void InstruVent::setNumType(int type)
    {
        this->numType = type;
    }
    InstruVent::~InstruVent()
    {
    }

    int Piano::getnTouche()
    {
        return nTouches;
    }
    void  Piano::setnTouche(int nTouches)
    {
        this->nTouches = nTouches;
    }
    Piano::~Piano()
    {
    }
    void  Piano::afficherP()
    {
        std::cout << "nombre de Touches : " << nTouches << std::endl;
    }

    bool numPiano::getToucheLourd()
    {
        return toucheLourd;
    }
    void numPiano::setToucheLourd(bool toucheLourd)
    {
        this->toucheLourd = toucheLourd;
    }
    bool numPiano::getQuaEchan()
    {
        return quaEchan;
    }
    void numPiano::setQuaEchan(bool quaEchan)
    {
        this->quaEchan = quaEchan;
    }
    numPiano::~numPiano()
    {
    }
    void numPiano::affiche()
    {
        std::cout << "Type :numerical Piano\n";
        afficherName();
        afficherP();
        std::cout << "toucheLourd : " << (toucheLourd) ? std::cout << "oui" : std::cout << "non\n";
        std::cout << "qualite Echan :" << quaEchan << std::endl;
    }
    bool droitPiano::getSilencieux()
    {
        return silencieux;
    }
    void droitPiano::setSilencieux(bool silencieux)
    {
        this->silencieux = silencieux;
    }
    droitPiano::~droitPiano()
    {
    }
    void droitPiano::affiche()
    {
        std::cout << "Type :droit Piano\n";
        afficherName();
        afficherP();
        std::cout << "silencieux : " << (silencieux) ? std::cout << "oui" : std::cout << "non\n";
    }

    bool Guitare::getDroitGau()
    {
        return DroitGau;
    }
    void Guitare::setDroitGau(bool DroitGau)
    {
        this->DroitGau = DroitGau;
    }
    Guitare::~Guitare()
    {
    }

    bool GuitareElec::getAmpli()
    {
        return ampli;
    }
    void GuitareElec::setAmpli(bool ampli)
    {
        this->ampli = ampli;
    }
    bool GuitareElec::getPedale()
    {
        return pedale;
    }
    void GuitareElec::setPedale(bool pedale)
    {
        this->pedale = pedale;
    }
    GuitareElec::~GuitareElec()
    {
    }
    void GuitareElec::affiche()
    {
        std::cout << "Type :Guitare Electrique\n";
        afficherName();
        std::cout << "ampli : " << (ampli) ? std::cout << "oui" : std::cout << "non\n";
        std::cout << "pedale : " << (pedale) ? std::cout << "oui" : std::cout << "non\n";
    }

    int GuitareAcous::getTirantSymbolise()
    {
        return tirantSymbolise;
    }
    void  GuitareAcous::setTirantSymbolise(int tirantSymbolise)
    {
        this->tirantSymbolise = tirantSymbolise;
    }
    GuitareAcous::~GuitareAcous()
    {
    }
    void  GuitareAcous::affiche()
    {
        std::cout << "Type :Guitare Acoustique\n";
        afficherName();
        std::cout << "tirantSymbolise : " << tirantSymbolise;
    }

    bool fluteTra::getTrille()
    {
        return trille;
    }
    void fluteTra::setTrille(bool trille)
    {
        this->trille = trille;
    }
    int fluteTra::getQualite()
    {
        return qualite;
    }
    void fluteTra::setQualite(int qualite)
    {
        this->qualite = qualite;
    }
    fluteTra::~fluteTra()
    {
    }
    void fluteTra::affiche()
    {
        std::cout << "Type :flute Tra\n";
        afficherName();
        std::cout << "trille : " << (trille) ? std::cout << "oui" : std::cout << "non\n";
        std::cout << "qualite : " << qualite;
    }

    bool hautbois::getTrille()
    {
        return trille;
    }
    void hautbois::setTrille(bool trille)
    {
        this->trille = trille;
    }
    int hautbois::getQualite()
    {
        return qualite;
    }
    void hautbois::setQualite(int qualite)
    {
        this->qualite = qualite;
    }
    hautbois::~hautbois()
    {
    }
    void hautbois::affiche()
    {
        std::cout << "Type :haut bois\n";
        afficherName();
        std::cout << "trille : " << (trille) ? std::cout << "oui" : std::cout << "non\n";
        std::cout << "qualite : " << qualite;
    }

    int clarinette::getNumType()
    {
        return numType;
    }
    void clarinette::setNumType(int numType)
    {
        this->numType = numType;
    }
    std::string clarinette::getTypeNom(int numType)
    {
        return typeNom[numType];
    }
    clarinette::~clarinette()
    {
    }
    void clarinette::affiche()
    {
        std::cout << "Type :clarinette\n";
        afficherName();
        std::cout << "Type : " << typeNom[numType];
    }

std::string clarinette::typeNom[] = { "symphonique","chambre","harmonique" };
void Fiche_Technique(Instru &inst)
{
    inst.affiche();
}
void ExuctionTp5(int &valeurTmp)
{
    std::cout << "ca marche tres bien \n";
    std::cout << "\nentrer '0' pour quitter: ";
    std::cin >> valeurTmp;
    return;
}