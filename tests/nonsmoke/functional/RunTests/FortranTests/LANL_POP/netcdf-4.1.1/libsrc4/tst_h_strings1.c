/* This is part of the netCDF package.  Copyright 2010 University
   Corporation for Atmospheric Research/Unidata See COPYRIGHT file for
   conditions of use.

   This program does some HDF5 string stuff.

   Here's a HDF5 sample programs:
   http://hdf.ncsa.uiuc.edu/training/other-ex5/sample-programs/strings.c

   $Id: tst_h_strings1.c,v 1.1 2010/03/15 12:01:43 ed Exp $
*/
#include <nc_tests.h>

#define FILE_NAME "tst_h_strings1.h5"

int
main()
{
   printf("\n*** Checking HDF5 string types some more.\n");
   printf("*** Checking fill value of scalar string dataset...");
   {
#define VAR_NAME "Chamber_of_Secrets"      
      hid_t fapl_id, fcpl_id, fileid, grpid, spaceid;
      hid_t typeid, datasetid, plistid;
      void *fillp;
      char *data = "Not for the first time, an argument had broken "
	 "out over breakfast at number four, Privet Drive. Mr. Vernon "
	 "Dursley had been woken in the early hours of the morning by "
	 "a loud, hooting noise from his nephew Harry's room.";
      char *empty = "";

      /* Create file access and create property lists. */
      if ((fapl_id = H5Pcreate(H5P_FILE_ACCESS)) < 0) ERR;
      if ((fcpl_id = H5Pcreate(H5P_FILE_CREATE)) < 0) ERR;
      
      /* Set latest_format in access propertly list. This ensures that
       * the latest, greatest, HDF5 versions are used in the file. */ 
      if (H5Pset_libver_bounds(fapl_id, H5F_LIBVER_LATEST, H5F_LIBVER_LATEST) < 0) ERR;

      /* Set H5P_CRT_ORDER_TRACKED in the creation property list. This
       * turns on HDF5 creation ordering in the file. */
      if (H5Pset_link_creation_order(fcpl_id, (H5P_CRT_ORDER_TRACKED |
					       H5P_CRT_ORDER_INDEXED)) < 0) ERR;
      if (H5Pset_attr_creation_order(fcpl_id, (H5P_CRT_ORDER_TRACKED |
					       H5P_CRT_ORDER_INDEXED)) < 0) ERR;

      /* Create the file, open root group. */
      if ((fileid = H5Fcreate(FILE_NAME, H5F_ACC_TRUNC, fcpl_id, fapl_id)) < 0) ERR;
      if ((grpid = H5Gopen2(fileid, "/", H5P_DEFAULT)) < 0) ERR;
      
      /* Create string type. */
      if ((typeid = H5Tcopy(H5T_C_S1)) < 0) ERR;
      if (H5Tset_size(typeid, H5T_VARIABLE) < 0) ERR;
      
      /* Create a scalar space. */
      if ((spaceid = H5Screate(H5S_SCALAR)) < 0) ERR;

      /* Write an scalar dataset of this type. */
      if ((plistid = H5Pcreate(H5P_DATASET_CREATE)) < 0) ERR;
      if (H5Pset_fill_value(plistid, typeid, &empty) < 0) ERR;
      if ((datasetid = H5Dcreate1(grpid, VAR_NAME, typeid, 
				  spaceid, plistid)) < 0) ERR;
      if (H5Dwrite(datasetid, typeid, spaceid, spaceid, 
		   H5P_DEFAULT, &data) < 0) ERR;

      /* Close up. */
      if (H5Dclose(datasetid) < 0) ERR;
      if (H5Pclose(fapl_id) < 0) ERR;
      if (H5Pclose(fcpl_id) < 0) ERR;
      if (H5Pclose(plistid) < 0) ERR;
      if (H5Tclose(typeid) < 0) ERR;
      if (H5Gclose(grpid) < 0) ERR;
      if (H5Fclose(fileid) < 0) ERR;
   }
   SUMMARIZE_ERR;
   FINAL_RESULTS;
}
