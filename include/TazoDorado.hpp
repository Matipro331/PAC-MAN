class TazoDorado
{
private:
    bool flotando;
public:
    TazoDorado() {
        this->flotando = false;

    }
    ~TazoDorado() {}
    void flotar(){
        this->flotando = true;
    }
};
