class Car
{
private:
    const double accn = 3.4;
    const double retrdn = 2.2;
    const double friction_coeff = 0.4;
    double speed;
    double max_speed = 100;
    double angle_rad;
    enum colour
    {
        white,
        black,
        red,
        blue,
        green
    };

public:
    Car(double accn)
    {
        accn = accn;
    }
    void move()
    {
    }
};