#ifndef _FURNITURE_H_
#define _FURNITURE_H_
class Furniture {
    private:
        int weight;
    public:
        Furniture(int weight=0);
        ~Furniture();
        int getWeight() const;
        void setWeight(int weight);
};

class Sofa:public Furniture {
    public:
        Sofa();
        ~Sofa();
        void watchTv();
};

class Bed:public Furniture {
    public:
        Bed();
        ~Bed();
        void sleep();
};

class SofaBed:public Sofa, public Bed {
    public:
        SofaBed();
        ~SofaBed();
        void foldOut();
};
#endif // _FURNITURE_H_
