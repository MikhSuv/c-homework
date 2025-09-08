#include <stdio.h>

int get_key(double, double);

int main() {

  double x, y;

  printf("Введите координаты точки x и у: ");
  scanf("%lf %lf", &x, &y);

  int key = get_key(x, y);

  printf("Ключ принадлежности точки (%.2f, %.2f): %d\n", x, y, key);

  return 0;
}

int get_key(double x, double y) {
  int key = 0;
  if (x == 0 && y == 0) {
    key = 0; // начало координат
  } else if (y == 0) {
    if (x > 0) {
      key = 1; // правая полуось абсцисс
    } else {
      key = -1; // левая полуось абсцисс
    }
  } else if (x == 0) {
    if (y > 0) {
      key = 2; // верхняя полуось ординат
    } else {
      key = -2; // нижняя полуось ординат
    }
  } else if (x > 0 && y > 0) {
    key = 3; // первая четверть
  } else if (x < 0 && y < 0) {
    key = -3; // третья четверть
  } else if (x < 0 && y > 0) {
    key = 4; // вторая четверть
  } else if (x > 0 && y < 0) {
    key = -4; // четвертая четверть
  }
  return key;
}
