#include "teaching.h"

///Constructor Base
Teaching::Teaching() {
    hours = 0;
    }

///Constructor Copia
Teaching::Teaching(const Teaching& e) : name(e.name), hours(e.hours) { }

///Constructor Parametrizado
Teaching::Teaching(const std::string& n, Date& i, Date& f, int& h) : name(n), initialDate(i), finishDate(f), hours(h) { }

std::string Teaching::getName() {
    return name;
    }

Date Teaching::getInitialDate() {
    return initialDate;
    }

Date Teaching::getFinishDate() {
    return finishDate;
    }

int Teaching::getHours() {
    return hours;
    }

void Teaching::setName(const std::string& n) {
    name = n;
    }

void Teaching::setInitialDate(const Date& i) {
    initialDate = i;
    }

void Teaching::setFinishDate(const Date& f) {
    finishDate = f;
    }

void Teaching::setHours(const int& h) {
    hours = h;
    }

std::string Teaching::toString() {
    std::string result;
    char x[5];

    result = "Nombre: ";
    result += name;
    result += "Fecha de Inicio: ";
    result += initialDate.toString();
    result += "Fecha de Termino: ";
    result += finishDate.toString();
    result += "Cantidad de Horas Semanales: ";
    sprintf(x, "%02i", hours);
    result += x;

    return result;
    }
