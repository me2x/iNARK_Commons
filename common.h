#ifndef INARK_COMMONS
#define INARK_COMMONS
#include <iostream>

enum Search_Layers{
    S_CONTROLLER,
    S_RESOURCE,
    S_PHYSICAL,
    SEARCH_LAYER_END
};
enum Search_Types{
    TIMING,
    PROVA,
    PROVA2,
    SEARCH_TYPE_END
};

enum Layer{
    FUNCTION,
    TASK,
    CONTROLLER,
    RESOURCE,
    PHYSICAL,
    LAYER_ERROR
};

enum Priority{
    NO_PRIORITY,
    MISSION_CRITICAL,
    SAFETY_CRITICAL,
    PRIORITY_ENUM_SIZE
};

enum Component_Priority_Category{
    ROUND_ROBIN,
    PRIORITY,
    TDMA,
    HANDLING_SIZE
};

enum Component_Type{
  PROCESSOR,
  BUS,
  BRIDGE,
  PERIPHERAL,
  MEMORY,
  NOT_SPECIFIED,
  TYPE_SIZE
};



namespace commons{
Layer int_to_Layer(int i);
int Layer_to_int(Layer l);
Priority int_to_Priority(int i);
std::string Layer_to_String(Layer l);
Component_Type int_To_Type(int i);
Component_Priority_Category int_To_Priority_Handler(int i);
int Priority_Handler_To_Int (Component_Priority_Category  i);
std::string get_search_layer_names(Search_Layers l);
std::string get_search_type_name(Search_Types t);
std::string get_component_type_name(Component_Type t);    
std::string get_component_priority_type(Component_Priority_Category c);
}

#endif