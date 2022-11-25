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
           BTreeNode(vector<string> streamer_id_and_feature_data);

           /**
           * Returns the streamer id.
           * 
           * @return numeric_id.
           */
           string getId();

           /**
           * Returns the number of streamer views.
           * 
           * @return views.
           */
           string getStreamerViews();

           /**
           * Returns the number of the streamer's mature viewings.
           * 
           * @return mature.
           */
           string getStreamerMatureViewings();

           /**
           * Returns the how long it's been since the streamer created their account.
           * 
           * @return life_time.
           */
           string getLifeTime();

           /**
           * Returns the date the streamer created their account.
           * 
           * @return created_at.
           */
           string getAccountCreatedAt();

           /**
           * Returns the most recent date that the streamer updated their account.
           * 
           * @return updated_at.
           */
           string getAccountUpdatedAt();

           /**
           * Returns whether the streamer's account is a dead account.
           * 
           * @return dead_account.
           */
           string getDeadAccount();

           /**
           * Returns the primary language of the streamer.
           * 
           * @return language.
           */
           string getLanguage();

           /**
           * Returns the streamer's affiliation.
           * 
           * @return affiliate.
           */
           string getAffiliate();
         private:
           /*
           * The .first of the pair is the streamer id.
           * The .second of the pair is the streamer's feature data.
           */
           pair<string, vector<string>> streamer_data;

           /*
           * The nodes in the vector represent the people that the 
           * currect streamer shares mutual followers with.
           */
           vector<string> mutual_followers;

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