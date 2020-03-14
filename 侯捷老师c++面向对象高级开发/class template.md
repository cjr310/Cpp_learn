template<typename T>
class complex{
public:
    complex(T r=0, T i =0):re(r), im(i){}
    complex& operator _= (const complex&);
    T real () const { return re;}
    T imag() const { return im;}
private:
    T re, im;

    frinend complex& _doap1( complex* const complex&);
};

{
    complex<double> c1(2.5, 1.5);
    complex<int> c2(2,6);
}