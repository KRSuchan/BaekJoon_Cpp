// p_15687 : 직사각형
class Rectangle
{
private:
    int width;
    int height;

public:
    Rectangle(int width, int height)
    {
        set_width(width);
        set_height(height);
    };

    int get_width() const { return width; }
    int get_height() const { return height; }

    void set_width(int w)
    {
        if (w > 0 && w <= 1000)
        {
            width = w;
        }
    }
    void set_height(int h)
    {
        if (h > 0 && h <= 2000)
        {
            height = h;
        }
    }
    int area() const { return height * width; }
    int perimeter() const { return 2 * (height + width); }
    bool is_square() const { return height == width; }
};