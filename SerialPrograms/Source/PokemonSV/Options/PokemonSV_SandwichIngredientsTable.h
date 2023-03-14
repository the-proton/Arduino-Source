/*  Sandwich Ingredients Table
 *
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 *
 */

#ifndef PokemonAutomation_PokemonSV_SandwichIngredientsTable_H
#define PokemonAutomation_PokemonSV_SandwichIngredientsTable_H

#include "Common/Cpp/Options/EditableTableOption.h"
#include "PokemonSV_SandwichIngredientsOption.h"

namespace PokemonAutomation{
namespace NintendoSwitch{
namespace PokemonSV{

class SandwichIngredientsTableRow : public EditableTableRow {
public:
    SandwichIngredientsTableRow();
    virtual std::unique_ptr<EditableTableRow> clone() const override;

public:
    SandwichIngredientsTableCell item;
};


class SandwichIngredientsTable : public EditableTableOption_t<SandwichIngredientsTableRow> {
public:
    SandwichIngredientsTable(std::string label);

    bool find_item(const std::string& item_slug) const;

    std::vector<std::string> selected_items() const;

    virtual std::vector<std::string> make_header() const override;

    static std::vector<std::unique_ptr<EditableTableRow>> make_defaults();
};



}
}
}
#endif
