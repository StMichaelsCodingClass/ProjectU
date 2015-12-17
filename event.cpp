#include "event.h"

Event::Event(int t): _type(t){}

Event::~Event(){
    // for(auto i:data){
        // delete i.second;
    // }
}

void Event::addDatum(std::string key, EventDatum* val){
    data[key]=val;
}

void Event::free(){
    for(auto i:data){
        delete i.second;
    }
}


int Event::type() const{
    return _type;
}

const EventDatum* Event::getDatum(std::string index) const{
    EventData::const_iterator iter=data.find(index);

    return (iter==data.end())?iter->second:(EventDatum*)0;
}
