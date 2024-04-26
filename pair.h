#ifndef PAIR_H
#define PAIR_H

class Pair {
protected:
    double first;
    double second;

public:
    Pair(double f = 0.0, double s = 0.0);
    void setFirst(double f);
    void setSecond(double s);
    double getFirst() const;
    double getSecond() const;
    double product() const;
    virtual void print() const;
};

#endif