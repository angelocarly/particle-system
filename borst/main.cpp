#include <iostream>

#include "burst/Engine.h"

#include "TestPresenter.h"

class ExampleEngine
:
    public burst::Engine
{
    public:
        ExampleEngine( std::size_t inWidth, std::size_t inHeight, const char * inTitle )
        :
            burst::Engine( inWidth, inHeight, inTitle ),
            mPresenter( GetPresentContext() )
        {
        }

        virtual void Update() const override
        {
        }

        virtual burst::Presenter & GetPresenter() const override
        {
            return ( burst::Presenter & ) mPresenter;
        }

    private:
        borst::TestPresenter mPresenter;
};

int main()
{
    auto engine = ExampleEngine( 900, 900, "Particles" );
    engine.Run();
}