struct Vector3f
{
    float x;
    float y;
    float z;

    Vector3f()
    {
    }

    Vector3f(float x, float y, float z) : x(x), y(y), z(z)
    {
    }
};

struct Matrix4f
{
    float m[4][4];
};
