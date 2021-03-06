/*
 * \file landmarkEuclideanPoint.cpp
 * \date 14/04/2010
 * \author agonzale
 * \ingroup rtslam
 */

#include "rtslam/landmarkEuclideanPoint.hpp"

namespace jafar {
	namespace rtslam {

		/**
		 * Constructor from map
		 */
		LandmarkEuclideanPoint::LandmarkEuclideanPoint(const map_ptr_t & mapPtr) :
			LandmarkAbstract(mapPtr, 3) {
			geomType = POINT,
			type = PNT_EUC;
			converged = true;
		}

		LandmarkEuclideanPoint::LandmarkEuclideanPoint(const simulation_t dummy, const map_ptr_t & mapPtr) :
			LandmarkAbstract(FOR_SIMULATION, mapPtr, 3) {
			geomType = POINT,
			type = PNT_EUC;
			converged = true;
		}

		/**
		 * Constructor from a previous lmk
		 */
 	        LandmarkEuclideanPoint::LandmarkEuclideanPoint(const map_ptr_t & _mapPtr, const landmark_ptr_t prevlmk,jblas::ind_array & _icomp ) :
		        LandmarkAbstract(_mapPtr,prevlmk,size(),_icomp) {
			geomType = POINT,
			type = PNT_EUC;
			converged = true;
		}

	} // namespace rtslam
} // namespace jafar
