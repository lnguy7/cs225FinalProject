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
 #include <map>
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
           * @param id the streamer id.
           * @param views the streamer's average views.
           * @param language the streamer's native language.
           * @param mutuals a set of all the individual streamer's mutual followers.
           */
           BTreeNode(int id, int views, string language, std::set<int> mutuals);

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
           * @param id the streamer id.
           * @param views the streamer's average views.
           * @param language the streamer's native language.
           * @param mutuals a set of all the individual streamer's mutual followers.
           */
           void setStreamerData(int id, int views, string language, set<int> mutuals);

         private:

           /**
           * The streamer id.
           */
           int streamer_iden_;

           /**
           * The streamer's average viewcount.
           */
           int viewcount_;

           /**
           * The streamer native language.
           */
           std::string languages_;

           /*
           * The nodes in the vector represent the people that the 
           * currect streamer shares mutual followers with.
           */
           set<int> mutual_followers;

      };

      /**
      * The default constructor for the BTree.
      *
      * @param csvfile that contains the parsed and organized data.
      */
      BTree(ReadCSV csvfile);

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
      
      /**
      * Sorts the B-tree according to the user's specification (by language, viewcounts, etc). 
      * The algorithm maintains the structure and function of the B-tree as it is sorted.
      * 
      * @param vec the B-tree.
      * @param start the starting index for a node in the B-tree.
      * @param end the ending index for a node in the B-tree.
      */
      void MergeSort(std::vector<BTreeNode>& vec, int start, int end);

      /**
      * A helper function that is used to help the MergeSort function above.
      * 
      * @param vec the B-tree.
      * @param start the starting index for a node in the B-tree.
      * @param end the ending index for a node in the B-tree.
      */
      void MergeVectors(std::vector<BTreeNode>& vec, int start, int middle, int end);

    private:
      /**
      * The B-tree.
      */
      vector<BTreeNode> b_tree;

      /**
      * A map that takes in the streamer id as a key and returns their mutual followers.
      */
      map<int, set<int>> map_;

      /**
      * The streamer (id) and their feature data.
      */
      vector<pair<int,string>> featureVector_;
 };