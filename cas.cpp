#include "valec.hpp"
#include <cmath>
/*
 
 */

valec::valec(){
    this->r = 1;
    this->v = 1;
}
valec::valec(float r, float v){
    if(kontrolaAsi(r) && kontrolaAsi(v)){
        this->r = r;
        this->v = v;
    }
    else{
        this->r = 5.6;
        this->v = 5.2;
    }
}
valec::valec(const valec & orig){
    this->r = orig.get_r();
    this->v = orig.get_v();
}
valec::~valec(){
}
//////////////////////////////////////////////////
float valec::get_r() const{
    return this->r;
}
float valec::get_v() const{
    return this->v;
}
float valec::get_o() const{
    return this->o;
}
//////////////////////////////////////////////////
bool valec::set_r(float r){
    if(kontrolaAsi(r)){
        this->r = r;
        return true;
    }
    else{
        return false;
    }
}
bool valec::set_v(float v){
    if(kontrolaAsi(v)){
        this->v = v;
        return true;
    }
    else{
        return false;
    }
}
bool valec::set_o(float o){
    if(kontrolaAsi(o)){
        this->o = o;
        return true;
    }
    else{
        return false;
    }
}
///////////////////////////////////
float valec::povrch() const{
    return (2*(atan(1)*4)*(r*r))+(2*(atan(1)*4)*r*v);
}
float valec::objem() const{
    return(atan(1)*4)*(r*r)*v;
}
float valec::obsahPod() const{
    return(atan(1)*4)*(r*r);
}
float valec::obsahPlas() const{
    return 2*(atan(1)*4)*r*v;
}
float valec::vyskaVody() const{
    return (o*100) / ((atan(1)*4)*(r*r));
}
///////////////////////////////////////////////////
bool valec::kontrolaAsi(int strana) const{
    return(strana > 0) ? true : false;
}


 