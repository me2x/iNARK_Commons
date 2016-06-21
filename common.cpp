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
int commons::Layer_to_int(Layer l)
{
 switch(l)
    {
    case FUNCTION:
        return 1;
        break;
    case TASK:
        return 2;
        break;
    case CONTROLLER:
        return 3;
        break;
    case RESOURCE:
        return 4;
        break;
    case PHYSICAL:
        return 5;
        break;
    default:
        return -1;
        break;
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
    case 0:
        return NO_PRIORITY;
        break;
    case 1:
        return MISSION_CRITICAL;
        break;
    case 2:
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
    case 0:
        return PROCESSOR;break;

    case 1:
        return BUS;break;

    case 2:
        return BRIDGE;break;

    case 3:
        return PERIPHERAL;break;
        
    case 4:
        return MEMORY;break;

    default:
        return TYPE_SIZE;break;
    }
}
Component_Priority_Category commons::int_To_Priority_Handler(int i){
switch(i)
    {
    case 0:
        return ROUND_ROBIN;break;

    case 1:
        return PRIORITY;break;

    case 2:
        return TDMA;break;

    default:
        return HANDLING_SIZE;break;
    }
}
int commons::Priority_Handler_To_Int(Component_Priority_Category i)
{
switch(i)
    {
    case ROUND_ROBIN:
        return 0;break;

    case PRIORITY:
        return 1;break;

    case TDMA:
        return 2;break;

    default:
        return -1;break;
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
