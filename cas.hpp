    #ifndef CAS_HPP
    #define CAS_HPP

class cas{
    public:
        cas(); //konstrukotr

        cas(const cas&); //kopirovaci konstruktor

        cas(float, float); //okstruktor s parametry

        ~cas(); //destruktor

        float get_r()const;
        float get_v()const;
        float get_o()const;

        bool set_v(float);
        bool set_r(float);
        bool set_o(float);
        bool set_r_v(float, float);

        float objem()const;
        float povrch()const;
        float obsahPod()const;
        float obsahPlas()const;
        float vyskaVody()const;

    private:
        float r,v;
        float o;
        bool kontrolaAsi(int)const;
};

#endif /* VALEC_HPP */

