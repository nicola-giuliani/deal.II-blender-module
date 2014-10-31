#ifndef dealii_assimp_interface_h
#define dealii_assimp_interface_h

#include <deal.II/grid/tria.h>

using namespace dealii;


namespace AssimpInterface {

  template <int dim, int spacedim>   
  bool generate_triangulation(const std::string filename,
			      Triangulation<dim,spacedim> &tria,
			      int mesh_index=-1,
			      bool remove_duplicates=true,
			      double tol = 1e-12);
			      
}

#endif
