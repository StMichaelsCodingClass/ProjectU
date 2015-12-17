#include "eventmanager.h"
#include "utils.h"

#include <vector>
#include <memory>
#include <iostream>

std::vector<Event> events;
std::vector<EventListener*> listeners;

void queueEvent(Event e){
    events.push_back(e);
}

void dispatchEvents(){
    for(auto e=events.begin(); e!=events.end(); e++){
        for(int i=0; i!=listeners.size(); i++){
            listeners[i]->onEvent(*e);
            if(listeners[i]->remove()){
                delete listeners[i];
                listeners.erase(listeners.begin()+1);
                i--;
            }
        }
        e->free();
    }
    events.clear();
}

void addEventListener(EventListener* l){
    listeners.push_back(l);
}
