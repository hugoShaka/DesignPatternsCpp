// This file belongs to DesignPatternsCpp, a project designed to test and explore various C++ design patterns
// This source code is available under the MIT License
// Description:
# include <iostream>
# include <stdio.h>
# include <vector>
# include <memory>
//# include "Factory.h"
//# include "Adapter.h"
//# include "Builder.h"
//# include "AbstractFactory.h"
//# include "Memento.h"
//# include "Singleton.h"
//# include "Facade.h"
//# include "Mediator.h"
//# include "Decorator.h"
//# include "Bridge.h"
//# include "CoR.h"
//# include "Command.h"
//# include "Composite.h"
//# include "Flyweight.h"
//# include "Interpreter.h"
//# include "Observer.h"
//# include "Prototype.h"
//# include "Proxy.h"
//# include "State.h"
//# include "Strategy.h"
//# include "Visitor.h"
//# include "FunctionPointers.h"
//# include "PointerVariations.h"

int main(int argc, char *argv[]) {

    std::cout << "Main point of entry for testing Gang of Four design pattern implementations" << std::endl;

    // --- ######################################## --- 
   
    // FACTORY DESIGN PATTERN TEST

    // Add several lures to tacklebox to test Factory class implementation
    //std::vector< std::unique_ptr<Lure> > tackleBox;
    //tackleBox.push_back(Lure::setLure(JIG, "3/8th oz.","football head","Rage Craw"));
    //tackleBox.push_back(Lure::setLure(SPINNER,"1/4 oz.","willow leaf","gold"));
    //tackleBox.push_back(Lure::setLure(PLUG,"6 inch","Rapala","Fire Tiger"));
    //tackleBox.push_back(Lure::setLure(FLY,"3 inch","streamer","blue over white"));
    //tackleBox.push_back(Lure::setLure(SOFTPLASTIC,"6 inch","stick bait","watermelon flake"));

    //for (int i = 0; i < tackleBox.size(); ++i){
    //    tackleBox.at(i)->getLure();
    //}

    // --- ######################################## --- 
    
    // ADAPTER DESIGN PATTERN TEST
  
    // UPDATE WITH FINISHED TEMPLATES

    // Client interacts with Weight interface through weightAdapter initilized with weight in lbs. 
    //int value = 30;
    //std::unique_ptr<Weight> w(new weightAdapter(value)); 
    // Calling the getWeight function shows that a mass value is now available to the incompatible Mass interface
    //w->getWeight();    

    // --- ######################################## --- 

    // BUILDER DESIGN PATTERN TEST
    
    //TruckDealership dealer;

    //// TruckDealership instance takes ownership of builder instance
    //dealer.makeTruck( std::unique_ptr<RamBuilder> ( new RamBuilder() ) );
    //dealer.lookAtTruck();

    //dealer.makeTruck( std::unique_ptr<FordBuilder> ( new FordBuilder() ) );
    //dealer.lookAtTruck();

    // --- ######################################## --- 

    // ABSTRACT FACTORY DESIGN PATTERN TEST
    
    //bankType whichBank = BOA;
    //double savingsDeposit = 1000;
    //double checkingDeposit = 2500;
    //double creditLine = 2500;
   
    //std::unique_ptr<BankPatron> patron;

    //if (whichBank == WF) { 
    //    patron.reset( new BankPatron(std::unique_ptr<Bank>( new WellsFargo ), savingsDeposit, checkingDeposit, creditLine) );
    //}
    //
    //else { 
    //    patron.reset( new BankPatron(std::unique_ptr<Bank>( new BankOfAmerica ), savingsDeposit, checkingDeposit, creditLine) );
 
    //}

    //patron->viewAccounts();
    
    // --- ######################################## --- 
    
    // MEMENTO DESIGN PATTERN TEST

    //Person person;
    //person.printState();
    //person.setState(70, 200, 25.0, 30.0);
    //person.printState();
    //person.setState(70, 210, 25.0, 30.0);
    //person.printState();
    //person.setState(70, 220, 25.0, 30.0);
    //person.printState();
    //person.setState(70, 230, 25.0, 30.0);
    //person.printState();
    //person.backState();
    //person.printState();
    //person.backState();
    //person.printState();
    //person.forwardState();
    //person.printState();
    //person.setState(70, 180, 25.0, 30.0);
    //person.printState();
    //person.forwardState();
    //person.printState();
    //person.forwardState();
    //person.printState();
    //person.forwardState();
    //person.printState();
    //person.backState();
    //person.printState();
    //person.forwardState();
    //person.printState();

    // --- ######################################## --- 
    
    // SINGLETON DESIGN PATTERN TEST
    
    //std::cout << "Singleton class member string initialized as: " << SingletonClass::getInstance()->getString() << std::endl; 
    //SingletonClass::getInstance()->setString("Hello world");
    //std::cout << "Singleton class member string set to: " << SingletonClass::getInstance()->getString() << std::endl; 

    // --- ######################################## --- 
    
    // FACADE DESIGN PATTERN TEST
    
    //FacadeClass DateAndTimeInterface;
    //DateAndTimeInterface.getDateAndTime();

    // --- ######################################## --- 
    
    // MEDIATOR DESIGN PATTERN TEST
    
    //std::shared_ptr<InteractionMediator> im( new InteractionMediator() );

    //std::shared_ptr<Larry> larry( new Larry(im) ); 
    //std::shared_ptr<Curly> curly( new Curly(im) );
    //std::shared_ptr<Moe> moe( new Moe(im) );
    //
    //im->setStooges(larry, curly, moe);

    //larry->accidentallyHitMoe();
    //curly->accidentallyHitMoe();
    //moe->pokeCurlysEyes();
    //moe->slapLarrysHead();

    // --- ######################################## --- 
    
    // DECORATOR DESIGN PATTERN TEST
    
    //std::shared_ptr<WeaponSystem> base_platform( new AssaultRifle("M4 ") );
    //std::shared_ptr<WeaponSystem> with_scope( new Scope( base_platform, "red dot " ) );
    //std::shared_ptr<WeaponSystem> with_scope_and_foregrip( new Foregrip( with_scope,"vertical foregrip " ) );
    //std::shared_ptr<WeaponSystem> with_scope_and_foregrip_and_suppressor( new Suppressor( with_scope_and_foregrip, "AAC M4-2000 ") );
    //
    //base_platform->getWeaponSystem();
    //std::cout << std::endl; 

    //with_scope->getWeaponSystem();
    //std::cout << std::endl; 

    //with_scope_and_foregrip->getWeaponSystem();
    //std::cout << std::endl; 

    //with_scope_and_foregrip_and_suppressor->getWeaponSystem();
    //std::cout << std::endl; 

    // --- ######################################## --- 
    
    // BRIDGE DESIGN PATTERN TEST
    
    //std::shared_ptr<LureCharacteristic> black( new Color("black") );
    //std::shared_ptr<LureCharacteristic> pearl( new Color("pearl") );
    //std::shared_ptr<LureCharacteristic> firetiger( new Color("firetiger") );

    //std::shared_ptr<LureCharacteristic> quarter_oz( new Weight("1/4 oz.") ); 
    //std::shared_ptr<LureCharacteristic> half_oz( new Weight("1/2 oz.") ); 
    //std::shared_ptr<LureCharacteristic> three_quarter_oz( new Weight("3/4 oz.") ); 

    //std::shared_ptr<LureCharacteristic> four_inch( new Length("4\"") );
    //std::shared_ptr<LureCharacteristic> five_inch( new Length("5\"") );
    //std::shared_ptr<LureCharacteristic> six_inch( new Length("6\"") );

    //std::shared_ptr<LureCharacteristic> shallow( new Depth("0-4\'") );
    //std::shared_ptr<LureCharacteristic> medium_depth( new Depth("4-8\'") );
    //std::shared_ptr<LureCharacteristic> deep_diver( new Depth("8-12\'") );

    //std::unique_ptr<LureType> big_bass_jig( new LeadJig( black, three_quarter_oz ) );
    //std::unique_ptr<LureType> finesse_jig( new LeadJig( pearl, quarter_oz ) );
 
    //std::unique_ptr<LureType> big_plastic( new PlasticSoft( black, six_inch ) );
    //std::unique_ptr<LureType> small_plastic( new PlasticSoft( pearl, four_inch ) );

    //std::unique_ptr<LureType> power_crank( new Crankbait( firetiger, six_inch, deep_diver ) );
    //
    //std::unique_ptr<LureType> classic_spinnerbait( new Spinnerbait( pearl, half_oz ) );

    //big_bass_jig->getLure();
    //finesse_jig->getLure();
    //big_plastic->getLure();
    //small_plastic->getLure();
    //power_crank->getLure();
    //classic_spinnerbait->getLure();

    // --- ######################################## --- 
    
    // CHAIN OF RESPONSIBILITY DESIGN PATTERN TEST
    
    //Cashier cashier;
    //Cook cook;
    //Runner runner;

    //cashier.addWorker(&cook);
    //cashier.addWorker(&runner);
    //runner.setNext(&cashier);

    //FastFood request1 = burger;
    //FastFood request2 = drink;
    //FastFood request3 = fries;
    //FastFood request4 = change;

    //cashier.service(request1);
    //cashier.service(request2);
    //cashier.service(request3);
    //cashier.service(request4);

    // --- ######################################## --- 
    
    // COMMAND DESIGN PATTERN TEST
    
    //TeamMember db("Defensive back", std::unique_ptr<Command> ( new Command() ) );
    //TeamMember rb("Running back", std::unique_ptr<Command> ( new Command() ) );
    //TeamMember ol("Offensive line", std::unique_ptr<Command> ( new Command() ) );
    //TeamMember db_coach("Defensive backs coach", std::unique_ptr<Command> ( new Command(&db, &TeamMember::runDBDrills) ) );
    //TeamMember rb_coach("Running backs coach", std::unique_ptr<Command> ( new Command(&rb, &TeamMember::runLaps) ) );
    //TeamMember ol_coach("Offensive line coach", std::unique_ptr<Command> ( new Command(&ol, &TeamMember::runLinemanDrills) ) );

    //db_coach.commandDrills();
    //rb_coach.commandDrills();
    //ol_coach.commandDrills();
     
    // --- ######################################## --- 
    
    // COMPOSITE DESIGN PATTERN TEST
    
    //std::vector<std::string> names;
    //names.push_back("Jig");
    //names.push_back("Soft plastic");
    //names.push_back("Spinnerbait");
    //names.push_back("Crankbait");

    //int num_lure_types = names.size();

    //std::vector< std::unique_ptr<CompositeLure> > box;

    //for (int i = 0; i < num_lure_types; ++i) { 
    //    box.push_back( std::unique_ptr<CompositeLure>( new TackleBox() ) ); 
    //}
    //
    //for (int i = 0; i < num_lure_types; ++i) { 
    //    box.at(i)->addLure( std::unique_ptr<CompositeLure>( new SingleLure(names.at(i)) ) ); 
    //}
    //
    //for (int i = 1; i < num_lure_types; ++i) { 
    //    box.at(0)->addLure( std::unique_ptr<CompositeLure>( new SingleLure(names.at(i)) ) ); 
    //}

    //
    //for (int i = 0; i < num_lure_types; ++i) { box.at(i)->getLure(); std::cout << std::endl; }

    // --- ######################################## --- 
    
    // FLYWEIGHT DESIGN PATTERN TEST
   
    //RectangleFactory rf;
    //std::shared_ptr<Rectangle> rect1 = rf.getRectangle(3,2);
    //std::shared_ptr<Rectangle> rect2 = rf.getRectangle(2,2);
    //rect1->draw(0,0);    
    //rect2->draw(1,1);    

    //std::cout << "Check pointers: rect1 - " << rect1 << " rect2 - " << rect2 << std::endl;
    
    // --- ######################################## --- 
    
    // INTERPRETER DESIGN PATTERN TEST
    
    //Interpreter i;
    //i.setInput(55);
    //i.interpret();
    
    // --- ######################################## --- 
    
    // OBSERVER DESIGN PATTERN TEST
    
    //SubjectClass s("Hi", "Hello", 6.5, 5.0, 1, 3);
    //Observer(&s, STRING1);
    //Observer(&s, INT1);
    //s.publishState();
    
    // --- ######################################## --- 
    
    // PROTOTYPE DESIGN PATTERN TEST
    
    //Factory f;
    //std::vector< std::unique_ptr<A> > instances_A;

    //Type t1 = TYPEA1;
    //instances_A.push_back(f.getA(t1));
    //Type t2 = TYPEA2;
    //instances_A.push_back(f.getA(t2));
    //Type t3 = TYPEA3;
    //instances_A.push_back(f.getA(t3));

    //for (int i = 0; i < instances_A.size(); ++i) {
    //    instances_A.at(i)->action();
    //}

    // --- ######################################## --- 
    
    // PROXY DESIGN PATTERN TEST
    
    //Proxy p;
    //std::cout << "ProxySubject state after lazy initialization: " << p.getProxySubjectState() << std::endl;
    //p.setProxySubjectState(5);
    //std::cout << "ProxySubject state after setting state: " << p.getProxySubjectState() << std::endl;
    
    // --- ######################################## --- 
    
    // STATE DESIGN PATTERN TEST
    
    //Subject s;
    //s.setState( std::unique_ptr<State>( new State1() ) );
    //s.m_state->state1(&s);
    //s.m_state->state2(&s);
    //s.m_state->state3(&s);
    //s.m_state->state1(&s);
    //s.m_state->state2(&s);
    //s.m_state->state3(&s);
    
    // --- ######################################## --- 
    
    // STRATEGY DESIGN PATTERN TEST
    
    //Interface i;
    //Fibonacci f;
    //Triangle t;
    //Square s;
    //i.setStrategy(&s);
    //i.getSequence(10); 
    
    // --- ######################################## --- 
    
    // VISITOR DESIGN PATTERN TEST
    
    //std::vector< std::unique_ptr<Fish> > fish;
    //fish.push_back( std::unique_ptr<Fish> ( new Bass() ) ); 
    //fish.push_back( std::unique_ptr<Fish> ( new Trout() ) ); 
    //fish.push_back( std::unique_ptr<Fish> ( new Musky() ) );

    //Jig jig;
    //Fly fly;
    //Plug plug;

    //for ( int i = 0; i < fish.size(); ++i ) {
    //    fish.at(i)->seeLure(jig);
    //    fish.at(i)->seeLure(fly);
    //    fish.at(i)->seeLure(plug);
    //} 

    // --- ######################################## --- 
    
    // FUNCTION POINTER TEST CASES

    // Test free function
    //std::function<void(std::string)> freeFunction = testFunction;
    //freeFunction("free function input");

    //// Test lambda
    //int i = 0, j = 0;
    //std::function<void(int,int)> lambdaFunction = [&](int i, int j) { 
    //    std::cout << "Values: " << i << " " << j << std::endl; 
    //};

    //lambdaFunction(i,j);

    //// Test std::bind
    //std::function<void()> bindFunction = std::bind(testFunction, "std::bind input");
    //bindFunction();

    //// Test member function
    //std::function<void(classMemberMethod&, std::string)> memberFunction = &classMemberMethod::memberMethod;
    //classMemberMethod Class1("Class1 input");
    //memberFunction(Class1, "Class1 member method input");
    //
    //// Test functor
    //std::function<void()> functorFunction = FunctorClass();
    //functorFunction();

    // --- ######################################## --- 
    
    // TEST CASES FOR C++ FUNCTIONALITY

    // Create scope to see what happens when things go out of scope
    
    //std::unique_ptr<int> unique_value( new int(1) );
    //std::shared_ptr<int> shared_value( new int(2) );
    //std::cout << "Shared pointer location: " << shared_value.get() << " value: " << *shared_value << " usage count: " << shared_value.use_count() << std::endl;
    //int *value = new int(3);

    //{

    //    TestPointer tp1( std::unique_ptr<int> (new int(1) ), std::shared_ptr<int> (new int(2) ), new int(3) );
    //           
    //    TestPointer tp2(std::move(unique_value), shared_value, value);

    //    std::cout << "Pointers initialized in argument:" << std::endl;
    //    tp1.printPointers();
    //    std::cout << "Pointers initialized outside of class and passed as arguments:" << std::endl;
    //    tp2.printPointers();

    //    // Check for dangling pointers
    //    if (unique_value.get()) {
    //        std::cout << "Unique pointer location: " << unique_value.get() << " value: " << *unique_value << std::endl;
    //    }
    //    else { std::cout << "Unique ptr is now nullptr: watch out for dangling pointers!" << std::endl; }
    //    std::cout << "Shared pointer location: " << shared_value.get() << " value: " << *shared_value << " usage count: " << shared_value.use_count() << std::endl;
    //    std::cout << "Raw pointer location: " << value << " value: " << *value << std::endl;

    //}

    //if (unique_value.get()) {
    //    std::cout << "Unique pointer location: " << unique_value.get() << " value: " << *unique_value << std::endl;
    //}
    //else { std::cout << "Unique ptr is now nullptr: watch out for dangling pointers!" << std::endl; }
    //std::cout << "Shared pointer location: " << shared_value.get() << " value: " << *shared_value << " usage count: " << shared_value.use_count() << std::endl;
    //std::cout << "Raw pointer location: " << value << " value: " << *value << std::endl;


    // Potential memory leak -> TestPointer class does not manage resource, just maintains pointer 
    //delete value; 
    // --- ######################################## --- 

    return 0;

}
