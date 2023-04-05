/*  Sandwich Makter Option
 *
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 *
 */

#ifndef PokemonAutomation_PokemonSV_SandwichMakerOption_H
#define PokemonAutomation_PokemonSV_SandwichMakerOption_H

#include "Common/Cpp/Options/GroupOption.h"
#include "Common/Cpp/Options/EnumDropdownOption.h"
#include "PokemonSV/Resources/PokemonSV_Ingredients.h"
#include "CommonFramework/Options/LanguageOCROption.h"
#include "PokemonSV_SandwichIngredientsOption.h"
#include "PokemonSV_SandwichIngredientsTable.h"

namespace PokemonAutomation{
namespace NintendoSwitch{
namespace PokemonSV{

class SandwichMakerOption : public GroupOption, private ConfigOption::Listener {

public:
    ~SandwichMakerOption();
    SandwichMakerOption();

    enum class HerbaSelection {
        sweet_herba_mystica,
        salty_herba_mystica,
        sour_herba_mystica,
        bitter_herba_mystica,
        spicy_herba_mystica,
    };

    enum class BaseRecipe {
        shiny,
        huge,
        tiny,
        paradox,
        custom,
    };

    enum class PokemonType {
        normal,
        fire,
        water,
        electric,
        grass,
        ice,
        fighting,
        poison,
        ground,
        flying,
        psychic,
        bug,
        rock,
        ghost,
        dragon,
        dark,
        steel,
        fairy,
    };

    enum class ParadoxRecipe {
        humungo3_greattusk_1,
        humungo2_screamtail_1,
        humungo2_screamtail_2,
        humungo2_brutebonnet_1,
        humungo2_brutebonnet_2,
        humungo3_fluttermane_1,
        humungo3_fluttermane_2,
        humungo2_slitherwing_1,
        humungo2_slitherwing_2,
        humungo3_sandyshocks_1,
        humungo3_sandyshocks_2,
        humungo3_roaringmoon_1,
        humungo3_roaringmoon_2,
        humungo2_irontreads_1,
        humungo2_irontreads_2,
        humungo2_ironbundle_1,
        humungo2_ironbundle_2,
        humungo2_ironhands_1,
        humungo2_ironhands_2,
        humungo2_ironjugulis_1,
        humungo2_ironjugulis_2,
        humungo3_ironmoth_1,
        humungo3_ironmoth_2,
        humungo3_ironthorns_1,
        humungo3_ironthorns_2,
        humungo2_ironvaliant_1,
        humungo2_ironvaliant_2,
        teensy3_greattusk_1,
        teensy2_screamtail_1,
        teensy2_screamtail_2,
        teensy2_brutebonnet_1,
        teensy3_fluttermane_1,
        teensy2_sliterwing_1,
        teensy2_sliterwing_2,
        teensy3_sandyshocks_1,
        teensy3_sandyshocks_2,
        teensy3_roaringmoon_1,
        teensy2_irontreads_1,
        teensy2_irontreads_2,
        teensy2_ironbundle_1,
        teensy2_ironbundle_2,
        teensy2_ironhands_1,
        teensy2_ironjugulis_1,
        teensy3_ironmoth_1,
        teensy3_ironthorns_1,
        teensy2_ironvaliant_1,
        teensy2_ironvaliant_2,
    };

    enum class SandwichRecipe {
        shiny_normal,
        shiny_fire,
        shiny_water,
        shiny_electric,
        shiny_grass,
        shiny_ice,
        shiny_fighting,
        shiny_poison,
        shiny_ground,
        shiny_flying,
        shiny_psychic,
        shiny_bug,
        shiny_rock,
        shiny_ghost,
        shiny_dragon,
        shiny_dark,
        shiny_steel,
        shiny_fairy,
        huge_normal,
        huge_fire,
        huge_water,
        huge_electric,
        huge_grass,
        huge_ice,
        huge_fighting,
        huge_poison,
        huge_ground,
        huge_flying,
        huge_psychic,
        huge_bug,
        huge_rock,
        huge_ghost,
        huge_dragon,
        huge_dark,
        huge_steel,
        huge_fairy,
        tiny_normal,
        tiny_fire,
        tiny_water,
        tiny_electric,
        tiny_grass,
        tiny_ice,
        tiny_fighting,
        tiny_poison,
        tiny_ground,
        tiny_flying,
        tiny_psychic,
        tiny_bug,
        tiny_rock,
        tiny_ghost,
        tiny_dragon,
        tiny_dark,
        tiny_steel,
        tiny_fairy,
        humungo3_greattusk_1,
        humungo2_screamtail_1,
        humungo2_screamtail_2,
        humungo2_brutebonnet_1,
        humungo2_brutebonnet_2,
        humungo3_fluttermane_1,
        humungo3_fluttermane_2,
        humungo2_slitherwing_1,
        humungo2_slitherwing_2,
        humungo3_sandyshocks_1,
        humungo3_sandyshocks_2,
        humungo3_roaringmoon_1,
        humungo3_roaringmoon_2,
        humungo2_irontreads_1,
        humungo2_irontreads_2,
        humungo2_ironbundle_1,
        humungo2_ironbundle_2,
        humungo2_ironhands_1,
        humungo2_ironhands_2,
        humungo2_ironjugulis_1,
        humungo2_ironjugulis_2,
        humungo3_ironmoth_1,
        humungo3_ironmoth_2,
        humungo3_ironthorns_1,
        humungo3_ironthorns_2,
        humungo2_ironvaliant_1,
        humungo2_ironvaliant_2,
        teensy3_greattusk_1,
        teensy2_screamtail_1,
        teensy2_screamtail_2,
        teensy2_brutebonnet_1,
        teensy3_fluttermane_1,
        teensy2_sliterwing_1,
        teensy2_sliterwing_2,
        teensy3_sandyshocks_1,
        teensy3_sandyshocks_2,
        teensy3_roaringmoon_1,
        teensy2_irontreads_1,
        teensy2_irontreads_2,
        teensy2_ironbundle_1,
        teensy2_ironbundle_2,
        teensy2_ironhands_1,
        teensy2_ironjugulis_1,
        teensy3_ironmoth_1,
        teensy3_ironthorns_1,
        teensy2_ironvaliant_1,
        teensy2_ironvaliant_2,
    };

    //Map for standard+type recipes taking Base + Type to find SandwichRecipe
    const std::map<std::pair<BaseRecipe, PokemonType>, SandwichRecipe> PremadeSandwichType{
        {{BaseRecipe::shiny, PokemonType::normal},  SandwichRecipe::shiny_normal},
        {{BaseRecipe::shiny, PokemonType::fire},    SandwichRecipe::shiny_fire},
        {{BaseRecipe::shiny, PokemonType::water},   SandwichRecipe::shiny_water},
        {{BaseRecipe::shiny, PokemonType::electric},SandwichRecipe::shiny_electric},
        {{BaseRecipe::shiny, PokemonType::grass},   SandwichRecipe::shiny_grass},
        {{BaseRecipe::shiny, PokemonType::ice},     SandwichRecipe::shiny_ice},
        {{BaseRecipe::shiny, PokemonType::fighting},SandwichRecipe::shiny_fighting},
        {{BaseRecipe::shiny, PokemonType::poison},  SandwichRecipe::shiny_poison},
        {{BaseRecipe::shiny, PokemonType::ground},  SandwichRecipe::shiny_ground},
        {{BaseRecipe::shiny, PokemonType::flying},  SandwichRecipe::shiny_flying},
        {{BaseRecipe::shiny, PokemonType::psychic}, SandwichRecipe::shiny_psychic},
        {{BaseRecipe::shiny, PokemonType::bug},     SandwichRecipe::shiny_bug},
        {{BaseRecipe::shiny, PokemonType::rock},    SandwichRecipe::shiny_rock},
        {{BaseRecipe::shiny, PokemonType::ghost},   SandwichRecipe::shiny_ghost},
        {{BaseRecipe::shiny, PokemonType::dragon},  SandwichRecipe::shiny_dragon},
        {{BaseRecipe::shiny, PokemonType::dark},    SandwichRecipe::shiny_dark},
        {{BaseRecipe::shiny, PokemonType::steel},   SandwichRecipe::shiny_steel},
        {{BaseRecipe::shiny, PokemonType::fairy},   SandwichRecipe::shiny_fairy},
        {{BaseRecipe::huge,  PokemonType::normal},  SandwichRecipe::huge_normal},
        {{BaseRecipe::huge,  PokemonType::fire},    SandwichRecipe::huge_fire},
        {{BaseRecipe::huge,  PokemonType::water},   SandwichRecipe::huge_water},
        {{BaseRecipe::huge,  PokemonType::electric},SandwichRecipe::huge_electric},
        {{BaseRecipe::huge,  PokemonType::grass},   SandwichRecipe::huge_grass},
        {{BaseRecipe::huge,  PokemonType::ice},     SandwichRecipe::huge_ice},
        {{BaseRecipe::huge,  PokemonType::fighting},SandwichRecipe::huge_fighting},
        {{BaseRecipe::huge,  PokemonType::poison},  SandwichRecipe::huge_poison},
        {{BaseRecipe::huge,  PokemonType::ground},  SandwichRecipe::huge_ground},
        {{BaseRecipe::huge,  PokemonType::flying},  SandwichRecipe::huge_flying},
        {{BaseRecipe::huge,  PokemonType::psychic}, SandwichRecipe::huge_psychic},
        {{BaseRecipe::huge,  PokemonType::bug},     SandwichRecipe::huge_bug},
        {{BaseRecipe::huge,  PokemonType::rock},    SandwichRecipe::huge_rock},
        {{BaseRecipe::huge,  PokemonType::ghost},   SandwichRecipe::huge_ghost},
        {{BaseRecipe::huge,  PokemonType::dragon},  SandwichRecipe::huge_dragon},
        {{BaseRecipe::huge,  PokemonType::dark},    SandwichRecipe::huge_dark},
        {{BaseRecipe::huge,  PokemonType::steel},   SandwichRecipe::huge_steel},
        {{BaseRecipe::huge,  PokemonType::fairy},   SandwichRecipe::huge_fairy},
        {{BaseRecipe::tiny,  PokemonType::normal},  SandwichRecipe::tiny_normal},
        {{BaseRecipe::tiny,  PokemonType::fire},    SandwichRecipe::tiny_fire},
        {{BaseRecipe::tiny,  PokemonType::water},   SandwichRecipe::tiny_water},
        {{BaseRecipe::tiny,  PokemonType::electric},SandwichRecipe::tiny_electric},
        {{BaseRecipe::tiny,  PokemonType::grass},   SandwichRecipe::tiny_grass},
        {{BaseRecipe::tiny,  PokemonType::ice},     SandwichRecipe::tiny_ice},
        {{BaseRecipe::tiny,  PokemonType::fighting},SandwichRecipe::tiny_fighting},
        {{BaseRecipe::tiny,  PokemonType::poison},  SandwichRecipe::tiny_poison},
        {{BaseRecipe::tiny,  PokemonType::ground},  SandwichRecipe::tiny_ground},
        {{BaseRecipe::tiny,  PokemonType::flying},  SandwichRecipe::tiny_flying},
        {{BaseRecipe::tiny,  PokemonType::psychic}, SandwichRecipe::tiny_psychic},
        {{BaseRecipe::tiny,  PokemonType::bug},     SandwichRecipe::tiny_bug},
        {{BaseRecipe::tiny,  PokemonType::rock},    SandwichRecipe::tiny_rock},
        {{BaseRecipe::tiny,  PokemonType::ghost},   SandwichRecipe::tiny_ghost},
        {{BaseRecipe::tiny,  PokemonType::dragon},  SandwichRecipe::tiny_dragon},
        {{BaseRecipe::tiny,  PokemonType::dark},    SandwichRecipe::tiny_dark},
        {{BaseRecipe::tiny,  PokemonType::steel},   SandwichRecipe::tiny_steel},
        {{BaseRecipe::tiny,  PokemonType::fairy},   SandwichRecipe::tiny_fairy},
    };

    //Map for Other recipes
    const std::map<ParadoxRecipe, SandwichRecipe> PremadeSandwichOther{
        {ParadoxRecipe::humungo3_greattusk_1,     SandwichRecipe::humungo3_greattusk_1},
        {ParadoxRecipe::humungo2_screamtail_1,    SandwichRecipe::humungo2_screamtail_1},
        {ParadoxRecipe::humungo2_screamtail_2,    SandwichRecipe::humungo2_screamtail_2},
        {ParadoxRecipe::humungo2_brutebonnet_1,   SandwichRecipe::humungo2_brutebonnet_1},
        {ParadoxRecipe::humungo2_brutebonnet_2,   SandwichRecipe::humungo2_brutebonnet_2},
        {ParadoxRecipe::humungo3_fluttermane_1,   SandwichRecipe::humungo3_fluttermane_1},
        {ParadoxRecipe::humungo3_fluttermane_2,   SandwichRecipe::humungo3_fluttermane_2},
        {ParadoxRecipe::humungo2_slitherwing_1,   SandwichRecipe::humungo2_slitherwing_1},
        {ParadoxRecipe::humungo2_slitherwing_2,   SandwichRecipe::humungo2_slitherwing_2},
        {ParadoxRecipe::humungo3_sandyshocks_1,   SandwichRecipe::humungo3_sandyshocks_1},
        {ParadoxRecipe::humungo3_sandyshocks_2,   SandwichRecipe::humungo3_sandyshocks_2},
        {ParadoxRecipe::humungo3_roaringmoon_1,   SandwichRecipe::humungo3_roaringmoon_1},
        {ParadoxRecipe::humungo3_roaringmoon_2,   SandwichRecipe::humungo3_roaringmoon_2},
        {ParadoxRecipe::humungo2_irontreads_1,    SandwichRecipe::humungo2_irontreads_1},
        {ParadoxRecipe::humungo2_irontreads_2,    SandwichRecipe::humungo2_irontreads_2},
        {ParadoxRecipe::humungo2_ironbundle_1,    SandwichRecipe::humungo2_ironbundle_1},
        {ParadoxRecipe::humungo2_ironbundle_2,    SandwichRecipe::humungo2_ironbundle_2},
        {ParadoxRecipe::humungo2_ironhands_1,     SandwichRecipe::humungo2_ironhands_1},
        {ParadoxRecipe::humungo2_ironhands_2,     SandwichRecipe::humungo2_ironhands_2},
        {ParadoxRecipe::humungo2_ironjugulis_1,   SandwichRecipe::humungo2_ironjugulis_1},
        {ParadoxRecipe::humungo2_ironjugulis_2,   SandwichRecipe::humungo2_ironjugulis_2},
        {ParadoxRecipe::humungo3_ironmoth_1,      SandwichRecipe::humungo3_ironmoth_1},
        {ParadoxRecipe::humungo3_ironmoth_2,      SandwichRecipe::humungo3_ironmoth_2},
        {ParadoxRecipe::humungo3_ironthorns_1,    SandwichRecipe::humungo3_ironthorns_1},
        {ParadoxRecipe::humungo3_ironthorns_2,    SandwichRecipe::humungo3_ironthorns_2},
        {ParadoxRecipe::humungo2_ironvaliant_1,   SandwichRecipe::humungo2_ironvaliant_1},
        {ParadoxRecipe::humungo2_ironvaliant_2,   SandwichRecipe::humungo2_ironvaliant_2},
        {ParadoxRecipe::teensy3_greattusk_1,      SandwichRecipe::teensy3_greattusk_1},
        {ParadoxRecipe::teensy2_screamtail_1,     SandwichRecipe::teensy2_screamtail_1},
        {ParadoxRecipe::teensy2_screamtail_2,     SandwichRecipe::teensy2_screamtail_2},
        {ParadoxRecipe::teensy2_brutebonnet_1,    SandwichRecipe::teensy2_brutebonnet_1},
        {ParadoxRecipe::teensy3_fluttermane_1,    SandwichRecipe::teensy3_fluttermane_1},
        {ParadoxRecipe::teensy2_sliterwing_1,     SandwichRecipe::teensy2_sliterwing_1},
        {ParadoxRecipe::teensy2_sliterwing_2,     SandwichRecipe::teensy2_sliterwing_2},
        {ParadoxRecipe::teensy3_sandyshocks_1,    SandwichRecipe::teensy3_sandyshocks_1},
        {ParadoxRecipe::teensy3_sandyshocks_2,    SandwichRecipe::teensy3_sandyshocks_2},
        {ParadoxRecipe::teensy3_roaringmoon_1,    SandwichRecipe::teensy3_roaringmoon_1},
        {ParadoxRecipe::teensy2_irontreads_1,     SandwichRecipe::teensy2_irontreads_1},
        {ParadoxRecipe::teensy2_irontreads_2,     SandwichRecipe::teensy2_irontreads_2},
        {ParadoxRecipe::teensy2_ironbundle_1,     SandwichRecipe::teensy2_ironbundle_1},
        {ParadoxRecipe::teensy2_ironbundle_2,     SandwichRecipe::teensy2_ironbundle_2},
        {ParadoxRecipe::teensy2_ironhands_1,      SandwichRecipe::teensy2_ironhands_1},
        {ParadoxRecipe::teensy2_ironjugulis_1,    SandwichRecipe::teensy2_ironjugulis_1},
        {ParadoxRecipe::teensy3_ironmoth_1,       SandwichRecipe::teensy3_ironmoth_1},
        {ParadoxRecipe::teensy3_ironthorns_1,     SandwichRecipe::teensy3_ironthorns_1},
        {ParadoxRecipe::teensy2_ironvaliant_1,    SandwichRecipe::teensy2_ironvaliant_1},
        {ParadoxRecipe::teensy2_ironvaliant_2,    SandwichRecipe::teensy2_ironvaliant_2},
    };

    //Leave the herba out, the user selects them as HERBA_ONE and HERBA_TWO.
    //Remember the ingredient limits: Six fillings, four condiments. Two condiment slots will be taken by the Herba.
    const std::map<SandwichRecipe, std::vector<std::string>> PremadeSandwichIngredients{
        {SandwichRecipe::shiny_normal,          {"cucumber", "pickle", "tofu", "tofu", "tofu", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_fire,            {"cucumber", "pickle", "red-bell-pepper", "red-bell-pepper","curry-powder","curry-powder", "red-bell-pepper"}},
        {SandwichRecipe::shiny_water,           {"cucumber", "pickle", "cucumber", "cucumber", "cucumber","curry-powder","curry-powder"}},
        {SandwichRecipe::shiny_electric,        {"cucumber", "pickle", "yellow-bell-pepper", "yellow-bell-pepper", "yellow-bell-pepper", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_grass,           {"cucumber", "pickle", "lettuce", "lettuce", "lettuce", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_ice,             {"cucumber", "pickle", "klawf-stick", "klawf-stick", "klawf-stick", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_fighting,        {"cucumber", "pickle", "pickle", "pickle", "pickle", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_poison,          {"cucumber", "pickle", "green-bell-pepper", "green-bell-pepper", "green-bell-pepper", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_ground,          {"cucumber", "pickle", "ham", "ham", "ham", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_flying,          {"cucumber", "pickle", "prosciutto", "prosciutto", "prosciutto", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_psychic,         {"cucumber", "pickle", "onion", "onion", "onion", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_bug,             {"cucumber", "pickle", "cherry-tomatoes", "cherry-tomatoes", "cherry-tomatoes", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_rock,            {"cucumber", "pickle", "bacon", "bacon", "bacon", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_ghost,           {"cucumber", "pickle", "red-onion", "red-onion", "red-onion", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_dragon,          {"cucumber", "pickle", "avocado", "avocado", "avocado", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_dark,            {"cucumber", "pickle", "smoked-fillet", "smoked-fillet", "smoked-fillet", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_steel,           {"cucumber", "pickle", "hamburger", "hamburger", "hamburger", "curry-powder", "curry-powder"}},
        {SandwichRecipe::shiny_fairy,           {"cucumber", "pickle", "tomato", "tomato", "tomato", "curry-powder", "curry-powder"}},
        {SandwichRecipe::huge_normal,           {"tofu", "mustard", "mustard"}},
        {SandwichRecipe::huge_fire,             {"red-bell-pepper", "mustard", "mustard"}},
        {SandwichRecipe::huge_water,            {"cucumber", "mustard", "mustard"}},
        {SandwichRecipe::huge_electric,         {"yellow-bell-pepper", "mustard", "mustard"}},
        {SandwichRecipe::huge_grass,            {"lettuce", "mustard", "mustard"}},
        {SandwichRecipe::huge_ice,              {"klawf-stick", "mustard", "mustard"}},
        {SandwichRecipe::huge_fighting,         {"pickle", "mustard", "mustard"}},
        {SandwichRecipe::huge_poison,           {"green-bell-pepper", "mustard", "mustard"}},
        {SandwichRecipe::huge_ground,           {"ham", "mustard", "mustard"}},
        {SandwichRecipe::huge_flying,           {"prosciutto", "mustard", "mustard"}},
        {SandwichRecipe::huge_psychic,          {"onion", "mustard", "mustard"}},
        {SandwichRecipe::huge_bug,              {"cherry-tomatoes", "mustard", "mustard"}},
        {SandwichRecipe::huge_rock,             {"bacon", "mustard", "mustard"}},
        {SandwichRecipe::huge_ghost,            {"red-onion", "mustard", "mustard"}},
        {SandwichRecipe::huge_dragon,           {"avocado", "mustard", "mustard"}},
        {SandwichRecipe::huge_dark,             {"smoked-fillet", "mustard", "mustard"}},
        {SandwichRecipe::huge_steel,            {"hamburger", "mustard", "mustard"}},
        {SandwichRecipe::huge_fairy,            {"tomato", "mustard", "mustard"}},
        {SandwichRecipe::tiny_normal,           {"tofu", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_fire,             {"red-bell-pepper", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_water,            {"cucumber", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_electric,         {"yellow-bell-pepper", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_grass,            {"lettuce", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_ice,              {"klawf-stick", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_fighting,         {"pickle", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_poison,           {"green-bell-pepper", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_ground,           {"ham", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_flying,           {"prosciutto", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_psychic,          {"onion", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_bug,              {"cherry-tomatoes", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_rock,             {"bacon", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_ghost,            {"red-onion", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_dragon,           {"avocado", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_dark,             {"smoked-fillet", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_steel,            {"hamburger", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::tiny_fairy,            {"tomato", "mayonnaise", "mayonnaise"}},
        {SandwichRecipe::humungo3_greattusk_1,   {"herbed-sausage", "herbed-sausage", "herbed-sausage", "herbed-sausage", "ham", "horseradish", "jam", "wasabi", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo2_screamtail_1,  {"noodles", "tomato", "tomato", "wasabi", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo2_screamtail_2,  {"noodles", "potato-salad", "vinegar", "salty-herba-mystica"}},
        {SandwichRecipe::humungo2_brutebonnet_1, {"potato-salad", "lettuce", "lettuce", "wasabi", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo2_brutebonnet_2, {"potato-salad", "rice", "jam", "chili-sauce", "salty-herba-mystica"}},
        {SandwichRecipe::humungo3_fluttermane_1, {"potato-salad", "potato-salad", "potato-salad", "potato-salad", "potato-salad", "tomato", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo3_fluttermane_2, {"potato-salad", "potato-salad", "potato-salad", "potato-salad", "potato-salad", "olive-oil", "yogurt", "yogurt", "salty-herba-mystica"}},
        {SandwichRecipe::humungo2_slitherwing_1, {"cherry-tomatoes", "cherry-tomatoes", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo2_slitherwing_2, {"pickle", "potato-salad", "rice", "chili-sauce", "cream-cheese", "salty-herba-mystica"}},
        {SandwichRecipe::humungo3_sandyshocks_1, {"noodles", "noodles", "noodles", "noodles", "noodles", "mustard", "wasabi", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo3_sandyshocks_2, {"noodles", "noodles", "noodles", "noodles", "noodles", "mustard", "jam", "salty-herba-mystica"}},
        {SandwichRecipe::humungo3_roaringmoon_1, {"potato-salad", "potato-salad", "potato-salad", "potato-salad", "potato-salad", "wasabi", "yogurt", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo3_roaringmoon_2, {"potato-salad", "potato-salad", "potato-salad", "potato-salad", "potato-salad", "wasabi", "vinegar", "salty-herba-mystica"}},
        {SandwichRecipe::humungo2_irontreads_1,  {"ham", "ham", "egg", "mustard", "curry-powder", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo2_irontreads_2,  {"noodles", "potato-salad", "peanut-butter", "salty-herba-mystica"}},
        {SandwichRecipe::humungo2_ironbundle_1,  {"cucumber", "cucumber", "noodles", "jam", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo2_ironbundle_2,  {"noodles", "rice", "wasabi", "curry-powder", "pepper", "salty-herba-mystica"}},
        {SandwichRecipe::humungo2_ironhands_1,   {"yellow-bell-pepper", "yellow-bell-pepper", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo2_ironhands_2,   {"noodles", "pickle", "rice", "jam", "pepper", "salty-herba-mystica"}},
        {SandwichRecipe::humungo2_ironjugulis_1, {"egg", "smoked-fillet", "smoked-fillet", "yogurt", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo2_ironjugulis_2, {"potato-salad", "rice", "ketchup", "wasabi", "salty-herba-mystica"}},
        {SandwichRecipe::humungo3_ironmoth_1,    {"chorizo", "chorizo", "chorizo", "noodles", "red-bell-pepper", "olive-oil", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo3_ironmoth_2,    {"chorizo", "chorizo", "noodles", "noodles", "rice", "rice", "curry-powder", "salty-herba-mystica"}},
        {SandwichRecipe::humungo3_ironthorns_1,  {"noodles", "noodles", "noodles", "noodles", "noodles", "marmalade", "mustard", "jam", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo3_ironthorns_2,  {"noodles", "noodles", "noodles", "noodles", "noodles", "yellow-bell-pepper", "mustard", "mustard", "salty-herba-mystica"}},
        {SandwichRecipe::humungo2_ironvaliant_1, {"herbed-sausage", "tomato", "tomato", "marmalade", "wasabi", "yogurt", "spicy-herba-mystica"}},
        {SandwichRecipe::humungo2_ironvaliant_2, {"potato-salad", "rice", "tomato", "salty-herba-mystica"}},
        {SandwichRecipe::teensy3_greattusk_1,    {"herbed-sausage", "herbed-sausage", "herbed-sausage", "noodles", "pickle", "horseradish", "horseradish", "sour-herba-mystica"}},
        {SandwichRecipe::teensy2_screamtail_1,   {"egg", "onion", "onion", "chili-sauce", "wasabi", "yogurt", "sour-herba-mystica"}},
        {SandwichRecipe::teensy2_screamtail_2,   {"herbed-sausage", "tomato", "tomato", "wasabi", "wasabi", "salty-herba-mystica"}},
        {SandwichRecipe::teensy2_brutebonnet_1,  {"egg", "smoked-fillet", "smoked-fillet", "chili-sauce", "curry-powder", "jam", "sour-herba-mystica"}},
        {SandwichRecipe::teensy3_fluttermane_1,  {"cheese", "potato-salad", "potato-salad", "potato-salad", "potato-salad", "tomato", "curry-powder", "curry-powder", "sour-herba-mystica"}},
        {SandwichRecipe::teensy2_sliterwing_1,   {"chorizo", "pickle", "pickle", "butter", "sour-herba-mystica"}},
        {SandwichRecipe::teensy2_sliterwing_2,   {"chorizo", "pickle", "pickle", "curry-powder", "marmalade", "wasabi", "salty-herba-mystica"}},
        {SandwichRecipe::teensy3_sandyshocks_1,  {"noodles", "noodles", "noodles", "noodles", "yellow-bell-pepper", "herbed-sausage", "horseradish", "sour-herba-mystica"}},
        {SandwichRecipe::teensy3_sandyshocks_2,  {"fried-fillet", "fried-fillet", "noodles", "noodles", "noodles", "banana", "wasabi", "wasabi", "wasabi", "salty-herba-mystica"}},
        {SandwichRecipe::teensy3_roaringmoon_1,  {"potato-salad", "potato-salad", "potato-salad", "potato-salad", "potato-salad", "herbed-sausage", "wasabi", "wasabi", "wasabi", "sour-herba-mystica"}},
        {SandwichRecipe::teensy2_irontreads_1,   {"hamburger", "hamburger", "herbed-sausage", "curry-powder", "whipped-cream", "sour-herba-mystica"}},
        {SandwichRecipe::teensy2_irontreads_2,   {"hamburger", "hamburger", "herbed-sausage", "curry-powder", "horseradish", "peanut-butter", "salty-herba-mystica"}},
        {SandwichRecipe::teensy2_ironbundle_1,   {"herbed-sausage", "klawf-stick", "klawf-stick", "cream-cheese", "wasabi", "sour-herba-mystica"}},
        {SandwichRecipe::teensy2_ironbundle_2,   {"herbed-sausage", "klawf-stick", "klawf-stick", "curry-powder", "pepper", "wasabi", "salty-herba-mystica"}},
        {SandwichRecipe::teensy2_ironhands_1,    {"yellow-bell-pepper", "yellow-bell-pepper", "sour-herba-mystica"}},
        {SandwichRecipe::teensy2_ironjugulis_1,  {"egg", "smoked-fillet", "smoked-fillet", "yogurt", "salt", "sour-herba-mystica"}},
        {SandwichRecipe::teensy3_ironmoth_1,     {"chorizo", "chorizo", "chorizo", "noodles", "red-bell-pepper", "olive-oil", "sour-herba-mystica"}},
        {SandwichRecipe::teensy3_ironthorns_1,   {"noodles", "noodles", "noodles", "noodles", "egg", "yellow-bell-pepper", "horseradish", "sour-herba-mystica"}},
        {SandwichRecipe::teensy2_ironvaliant_1,  {"pickle", "pickle", "egg", "salt", "yogurt", "marmalade", "sour-herba-mystica"}},
        {SandwichRecipe::teensy2_ironvaliant_2,  {"pickle", "pickle", "egg", "wasabi", "wasabi", "yogurt", "salty-herba-mystica"}},
    };

    std::string herba_to_string(HerbaSelection value);
    std::vector<std::string> get_premade_ingredients(SandwichRecipe value);
    static bool two_herba_required(BaseRecipe value);
    SandwichRecipe get_premade_sandwich_recipe(BaseRecipe base, PokemonType type, ParadoxRecipe other);

    OCR::LanguageOCROption LANGUAGE;
    EnumDropdownOption<BaseRecipe> BASE_RECIPE;
    EnumDropdownOption<PokemonType> TYPE;
    EnumDropdownOption<ParadoxRecipe> PARADOX;
    EnumDropdownOption<HerbaSelection> HERBA_ONE;
    EnumDropdownOption<HerbaSelection> HERBA_TWO;
    SandwichIngredientsTable SANDWICH_INGREDIENTS;

private:
    virtual void value_changed();

};

}
}
}
#endif
