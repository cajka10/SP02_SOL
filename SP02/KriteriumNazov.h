#pragma once
#include <string>
#include "Kriterium.h"

class CriterionName : public Kriterium<> {
public: std::string evaluate(const Oblast& a) override { return t.getName(); }
};
