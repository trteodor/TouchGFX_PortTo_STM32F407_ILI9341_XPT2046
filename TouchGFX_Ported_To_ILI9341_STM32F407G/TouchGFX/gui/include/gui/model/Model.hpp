#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }
    void setScanJunctionTemp(bool scanEnabled);
    int getTempValue();

    void tick();

protected:
    ModelListener* modelListener;

    int tickCounter;
    bool scanJunctionTemp;
};

#endif // MODEL_HPP
