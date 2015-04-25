#pragma once

class ISelectable
{
public:
    virtual void contains(int x, int y) = 0;
    virtual void setSelected(bool val) = 0;
    virtual bool isSelected() = 0;
};


