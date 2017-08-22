# include <iostream>

// Define gravitational constant
# define M_G 9.81

// Declaration of interface for weight of an entity 
class Weight {
    public:
        virtual void getWeight() = 0;
};

// Declaration of incompatible class for mass of entity
class Mass {
    public:
        template<typename T>
        Mass(T m) { entity_mass = m; }
        void getMass();

    private:
        double entity_mass;
};

// Adapter to allow client expecting Weight to interact with Mass interface
class weightAdapter : public Weight, private Mass {
    public:
        template<typename T>
        weightAdapter(T w) : Mass(w/M_G ) { std::cout << "Mass value returned for weight = " << w << ": "; }
        virtual void getWeight();
};