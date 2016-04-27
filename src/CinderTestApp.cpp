#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderTestApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void CinderTestApp::setup()
{
}

void CinderTestApp::mouseDown( MouseEvent event )
{
}

void CinderTestApp::update()
{
}

void CinderTestApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( CinderTestApp, RendererGl )
