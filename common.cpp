#include "common.h"

std::string get_search_layer_names(Search_Layers l)
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

std::string get_search_type_name(Search_Types t)
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