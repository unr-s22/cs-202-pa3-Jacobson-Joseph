#include "Money.h"

Money::Money(){

}

bool operator < (const Money &rhs) const {
    return allmoney < rhs.allmoney;
}

bool operator > (const Money &rhs) const {
    return allmoney > rhs.allmoney;
}

bool operator <= (const Money &rhs) const {
    return allmoney <= rhs.allmoney;
}

bool operator >= (const Money &rhs) const {
    return allmoney >= rhs.allmoney;
}

bool operator != (const Money &rhs) const {
    return allmoney != rhs.allmoney;
}

bool operator == (const Money &rhs) const {
    return allmoney == rhs.allmoney;
}

bool operator + (const Money &rhs) const {
    return allmoney + rhs.allmoney;
}

bool operator - (const Money &rhs) const {
    return allmoney - rhs.allmoney;
}

