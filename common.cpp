#include "common.h"

std::string commons::get_search_layer_names(Search_Layers l)
{
    switch (l)
    {
        case S_CONTROLLER:
            return "Controller";break;
        case S_RESOURCE:
            return "Resource";break;
        case S_PHYSICAL:
            return "Physical";break;
        default:
            return "Error"; break;
    }
}

std::string commons::get_search_type_name(Search_Types t)
{
    switch (t)
    {
        case TIMING:
            return "Timing"; break;
        case PROVA:
            return "Stocazzo";break;
        case PROVA2:
            return "fanculo";break;
        default:
            return "Error"; break;
    }
}

Layer commons::int_to_Layer(int i){
    switch(i)
    {
    case 1:
        return FUNCTION;
        break;
    case 2:
        return TASK;
        break;
    case 3:
        return CONTROLLER;
        break;
    case 4:
        return RESOURCE;
        break;
    case 5:
        return PHYSICAL;
        break;
    default:
        return LAYER_ERROR;
        break;
    }
}
Priority commons::int_to_Priority(int i){
    switch(i)
    {
    case 1:
        return NO_PRIORITY;
        break;
    case 2:
        return MISSION_CRITICAL;
        break;
    case 3:
        return SAFETY_CRITICAL;
        break;
    default:
        return PRIORITY_ENUM_SIZE;
        break;
    }
}
std::string commons::Layer_to_String(Layer l){
    switch(l)
    {
    case FUNCTION:
        return "function";
        break;
    case TASK:
        return "task" ;
        break;
    case CONTROLLER:
        return "controller";
        break;
    case RESOURCE:
        return "resource";
        break;
    case PHYSICAL:
        return "physical";
        break;
    default:
        return "error";
        break;
    }
}
Component_Type commons::int_To_Type(int i){
    switch(i)
    {
    case 1:
        return PROCESSOR;break;

    case 2:
        return BUS;break;

    case 3:
        return BRIDGE;break;

    case 4:
        return PERIPHERAL;break;
        
    case 5:
        return MEMORY;break;

    default:
        return TYPE_SIZE;break;
    }
}
Component_Priority_Category commons::int_To_Priority_Handler(int i){
switch(i)
    {
    case 1:
        return ROUND_ROBIN;break;

    case 2:
        return PRIORITY;break;

    case 3:
        return TDMA;break;

    default:
        return HANDLING_SIZE;break;
    }
}


std::string commons::get_component_type_name(Component_Type t){
    switch(t)
    {
    case PROCESSOR:
        return "processor";break;

    case BUS:
        return "bus";break;

    case BRIDGE:
        return "bridge";break;

    case PERIPHERAL:
        return "peripheral";break;
        
    case MEMORY:
        return "memory";break;

    default:
        return "Error"; break;
    }
}


std::string commons::get_component_priority_type(Component_Priority_Category c){
switch(c)
    {
    case ROUND_ROBIN:
        return "round robin";break;

    case PRIORITY:
        return "priority";break;

    case TDMA:
        return "TDMA";break;

    default:
        return "Error"; break;
    }
}
