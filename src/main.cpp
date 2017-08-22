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
    //std::unique_ptr<RamBuilder> ram( new RamBuilder() );
    //std::unique_ptr<FordBuilder> ford( new FordBuilder() );

    //dealer.makeTruck(std::move(ram));
    //dealer.lookAtTruck();

    //dealer.makeTruck(std::move(ford));
    //dealer.lookAtTruck();

    // --- ######################################## --- 

    // ABSTRACT FACTORY DESIGN PATTERN TEST
    
    //bankType whichBank = BOA;
    //double savingsDeposit = 1000;
    //double checkingDeposit = 2500;
    //double creditLine = 2500;
    //
    //std::unique_ptr<Bank> bank;
    //
    //if (whichBank == WF) { bank = std::unique_ptr<Bank>( new WellsFargo ); }
    //else { bank = std::unique_ptr<Bank>( new BankOfAmerica ); }

    //BankPatron patron(std::move(bank), savingsDeposit, checkingDeposit, creditLine);
    //patron.viewAccounts();
    
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
    //std::shared_ptr<Moe> moe( new Moe(im) t head ahead of master);
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
    
    //LureCharacteristic* black = new Color("black");
    //LureCharacteristic* pearl = new Color("pearl");
    //LureCharacteristic* firetiger = new Color("firetiger");

    //LureCharacteristic* quarter_oz = new Weight("1/4 oz."); 
    //LureCharacteristic* half_oz = new Weight("1/2 oz."); 
    //LureCharacteristic* three_quarter_oz = new Weight("3/4 oz."); 

    //LureCharacteristic* four_inch = new Length("4\"");
    //LureCharacteristic* five_inch = new Length("5\"");
    //LureCharacteristic* six_inch = new Length("6\"");

    //LureCharacteristic* shallow = new Depth ("0-4\'");
    //LureCharacteristic* medium_depth = new Depth ("4-8\'");
    //LureCharacteristic* deep_diver = new Depth ("8-12\'");

    //LureType* big_bass_jig = new LeadJig(black, three_quarter_oz);
    //LureType* finesse_jig = new LeadJig(pearl, quarter_oz);

    //LureType* big_plastic = new PlasticSoft(black, six_inch);
    //LureType* small_plastic = new PlasticSoft(pearl, four_inch);

    //LureType* power_crank = new Crankbait(firetiger, six_inch, deep_diver);
    //
    //LureType* classic_spinnerbait = new Spinnerbait(pearl, half_oz);

    //big_bass_jig->getLure();
    //finesse_jig->getLure();
    //big_plastic->getLure();
    //small_plastic->getLure();
    //power_crank->getLure();
    //classic_spinnerbait->getLure();

    //delete big_bass_jig, delete finesse_jig;
    //delete big_plastic, delete small_plastic;
    //delete power_crank;
    //delete classic_spinnerbait;

    delete black, delete pearl, delete firetiger;
    delete quarter_oz, delete half_oz, delete three_quarter_oz;
    delete four_inch, delete five_inch, delete six_inch;
    delete shallow, delete medium_depth, delete deep_diver; 
    
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
    
    //TeamMember db("Defensive back", Command());
    //TeamMember rb("Running back", Command());
    //TeamMember ol("Offensive line", Command());
    //TeamMember db_coach("Defensive backs coach", Command(&db, &TeamMember::runDBDrills));
    //TeamMember rb_coach("Running backs coach", Command(&rb, &TeamMember::runLaps));
    //TeamMember ol_coach("Offensive line coach", Command(&ol, &TeamMember::runLinemanDrills));

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

    //std::vector<TackleBox> box;
    //TackleBox tb;

    //for (int i = 0; i < num_lure_types; ++i) { box.push_back(tb); }
    //for (int i = 0; i < num_lure_types; ++i) { box.at(i).addLure(new SingleLure(names.at(i))); }
    //for (int i = 1; i < num_lure_types; ++i) { box.at(0).addLure(&(box.at(i))); }
    //for (int i = 0; i < num_lure_types; ++i) { box.at(i).getLure(); std::cout << std::endl; }

    // --- ######################################## --- 
    
    // FLYWEIGHT DESIGN PATTERN TEST
   
    // UPDATE USING POINTERS

    //RectangleFactory rf;
    //Rectangle *rect1 = rf.getRectangle(3,2);
    //Rectangle *rect2 = rf.getRectangle(2,2);
    //rect1->draw(0,0);    
    //rect2->draw(1,1);    

    //std::cout << "Check pointers: rect1 - " << rect1 << " rect2 - " << rect2 << std::endl;
    
    // --- ######################################## --- 
    
    // INTERPRETER DESIGN PATTERN TEST
    
    //Interpreter i;
    //i.setInput(0);
    //i.interpret();
    
    // --- ######################################## --- 
    
    // OBSERVER DESIGN PATTERN TEST
    
    //Subject s("Hi", "Hello", 6.5, 5.0, 1, 3);
    //Observer(&s, STRING1);
    //Observer(&s, INT1);
    //s.publishState();
    
    // --- ######################################## --- 
    
    // PROTOTYPE DESIGN PATTERN TEST
    
    //Factory f;
    //std::vector<A*> instances_A;

    //Type t1 = TYPEA1;
    //instances_A.push_back(f.getA(t1));
    //t1 = TYPEA2;
    //instances_A.push_back(f.getA(t1));
    //t1 = TYPEA3;
    //instances_A.push_back(f.getA(t1));

    //for (int i = 0; i < instances_A.size(); ++i) {
    //    instances_A.at(i)->action();
    //}

    //for (int i = 0; i < instances_A.size(); ++i) {
    //    delete instances_A.at(i);
    //}
    
    // --- ######################################## --- 
    
    // PROXY DESIGN PATTERN TEST
    
    //Proxy p;
    //std::cout << "ProxySubject state after lazy initialization: " << p.getProxySubjectState() << std::endl;
    //p.setProxySubjectState(5);
    //std::cout << "ProxySubject state after setting state: " << p.getProxySubjectState() << std::endl;
    
    // --- ######################################## --- 
    
    // STATE DESIGN PATTERN TEST
    
    //Subject *s = new Subject();
    //s->setState(new State1());
    //s->m_state->state1(s);
    //s->m_state->state2(s);
    //delete s;
    
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
    
    //std::vector<Fish*> fish;
    //fish.push_back(new Bass); 
    //fish.push_back(new Trout); 
    //fish.push_back(new Musky);

    //Jig jig;
    //Fly fly;
    //Plug plug;

    //for ( int i = 0; i < fish.size(); ++i ) {
    //    fish.at(i)->seeLure(jig);
    //    fish.at(i)->seeLure(fly);
    //    fish.at(i)->seeLure(plug);
    //} 

    //for ( int i = 0; i < fish.size(); ++i ) {
    //    delete fish.at(i);
    //}
    
    // --- ######################################## --- 

    return 0;

}