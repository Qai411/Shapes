#include <iostream>

class RectangleBlocks{
    private:
        int width, height;
    public:
        RectangleBlocks(int w, int h){
            setWidth(w);
            setHeight(h);
        }

        void setWidth(int w){
            width = w;
        }

        void setHeight(int h){
            height = h;
        }

        int getWidth(){
            return width;
        }

        int getHeight(){
            return height;
        }

        int area(){
            return getWidth() * getHeight();
        }

        int perimeter(){
            return 2 * (getWidth() + getHeight());
        }
};



