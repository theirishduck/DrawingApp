#pragma once

#include <QColor>

class ILine
{
public:
    virtual void setLineColor(QColor val) = 0;
    virtual QColor getLineColor() = 0;

    virtual void setlineThickness(int val) = 0;
    virtual int getlineThickness() = 0;
};


