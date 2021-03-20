typedef struct OBJECT {
  float w;
  float h;
  float (*area)(const Object *);
} Object;

float area(const Object*);
