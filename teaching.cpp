#include "teaching.h"

///Constructor Base
Teaching::Teaching()
{
    hours = 0;
}

///Constructor Copia
Teaching::Teaching(const Teaching& e) : name(e.name), hours(e.hours){ }

///Constructor Parametrizado
Teaching::Teaching(const Name& n, Date& i, Date& f, int& h) : name(n), initialDate(i), finishDate(f), hours(h) { }

Name Teaching::getName()
{
    return name;
}

Date Teaching::getInitialDate()
{
    return initialDate;
}

Date Teaching::getFinishDate()
{
    return finishDate;
}

int Teaching::getHours()
{
    return hours;
}

void Teaching::setName(const Name& n)
{
    name = n;
}

void Teaching::setInitialDate(const Date& i)
{
    initialDate = i;
}

void Teaching::setFinishDate(const Date& f)
{
    finishDate = f;
}

void Teaching::setHours(const int& h)
{
    hours = h;
}

std::string Teaching::toString()
{
    std::string result;

    result = "Nombre: ";
    result += name.toString();
    result += "Fecha de Inicio: ";
    result += initialDate.toString();
    result += "Fecha de Termino: ";
    result += finishDate.toString();
    result += "Cantidad de Horas Semanales: ";
    result += hours;

    return result;
}
