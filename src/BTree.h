/**
 * @file BTree.h
 * The BTree data structure will represent the individual streamers and 
 * their features, along with their connections to other streamers.
 *
 * @author Bella Cruz
 */

 #pragma once

 #include <vector>
 #include <string>
 #include "ReadCSV.h"

 using namespace std;
 
 class BTree {
   public:
      class BTreeNode {
         public:
           /*
           * The default constructor for the BTreeNode.
           */
           BTreeNode();

           /**
           * Constructs a BTreeNode with the provided streamer's id and their corresponding feature data. 
           * 
           * TODO: Add a parameter for the streamer's mutual followers to initialize, the member variable "mutual_followers". 
           * 
           * @param streamer_id_and_feature_data vector that is used to initialize the BTreeNode member variable, "streamer_data".
           */
           BTreeNode(int s_id, ReadCSV csvfile);

           /**
           * Returns the streamer id.
           * 
           * @return numeric_id.
           */
           int getId();

           /**
           * Returns the number of streamer views.
           * 
           * @return views.
           */
           int getStreamerViews();

           /**
           * Returns the primary language of the streamer.
           * 
           * @return language.
           */
           string getLanguage();

           /**
           * Changes the streamer's data.
           */
           void setStreamerData(int id, int views, std::string language);

         private:

           int streamer_iden_;
           int viewcount_;
           std::string languages_;
           ReadCSV csvfiles;

           /*
           * The nodes in the vector represent the people that the 
           * currect streamer shares mutual followers with.
           */
           vector<int> mutual_followers;

      };

      /*
      * The default constructor for the BTree.
      */
      BTree();

      /**
      * Constructs a graphical represenation of all the streamers, their feature data, and connections.
      * 
      * @param streamers all the streamers, their feature data, and connections.
      */
      BTree(vector<BTreeNode> streamers);

      /**
      * Returns a graphical represenation of all the streamers.
      * 
      * @return the vector representation of a B-Tree.
      */
      vector<BTreeNode> getBTree();

    private:
      /* This vector contains the entire B-Tree. */
      vector<BTreeNode> b_tree;

 };