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

std::string get_search_layer_names(Search_Layers l);
std::string get_search_type_name(Search_Types t);