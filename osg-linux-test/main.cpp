/** install:
 *  cmake .
 *  make
 * 
 *  use:
 *  e.g ./render-test-linux --model models/millenium-falcon.3DS
 */

#include <osgDB/ReadFile>
#include <osgViewer/Viewer>
#include <string>

int main( int argc, char** argv )
{
    osg::ArgumentParser arguments( &argc, argv );
    std::string filename;
    osgViewer::Viewer viewer;
    arguments.read( "--model", filename );
    osg::ref_ptr<osg::Node> model = osgDB::readNodeFile( filename );
    viewer.setSceneData( model.get() );
    
    return viewer.run();
}
