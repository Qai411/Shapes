#ifndef RECTBLOCKS_H
#define RECTBLOCKS_H


class rectBlocks
{
    public:
        rectBlocks();
        rectBlocks(char id, int l, int w, int h);
        void printDimension();

    protected:
        char shapeId;
        int length, width, height;
    private:
};

#endif // RECTBLOCKS_H
