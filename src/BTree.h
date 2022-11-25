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

           /*
           * Creates the streamer feature data for the individual streamer (denoted by the streamer's id).
           *
           * @param id the streamer's unique id.
           * @param streamer_feature_data the feature data for the specific streamer.
           */
           void setStreamerData(string id, vector<string> streamer_feature_data);

           /*
           * Adds the children of the current streamer. According to the dataset, a streamer's 'children' 
           * represent other streamers with whom they share mutual followers.
           *
           * @param mutual_followers a vector of all the streamers the current streamer shares a connection with.
           */
           void setMutualFollowers(vector<BTreeNode*> mutual_follows);

           /*
           * Returns the streamer id.
           *
           * @return numeric_id.
           */
           string getId();

           /*
           * Returns the number of streamer views.
           *
           * @return views.
           */
           string getStreamerViews();

           /*
           * Returns the number of the streamer's mature viewings.
           *
           * @return mature.
           */
           string getStreamerMatureViewings();

           /*
           * Returns the how long it's been since the streamer created their account.
           *
           * @return life_time.
           */
           string getLifeTime();

           /*
           * Returns the date the streamer created their account.
           *
           * @return created_at.
           */
           string getAccountCreatedAt();

           /*
           * Returns the most recent date that the streamer updated their account.
           *
           * @return updated_at.
           */
           string getAccountUpdatedAt();

           /*
           * Returns whether the streamer's account is a dead account.
           * 
           * @return dead_account.
           */
           string getDeadAccount();

           /*
           * Returns the primary language of the streamer.
           *
           * @return language.
           */
           string getLanguage();

           /*
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
           vector<BTreeNode*> mutual_followers;

      };

      /*
      * The default constructor for the BTree.
      */
      BTree();

      /*
      * Constructs a graphical represenation of all the streamers, their feature data, and connections.
      *
      * @param streamers all the streamers, their feature data, and connections.
      */
      BTree(vector<BTreeNode> streamers);

      /*
      * Returns a graphical represenation of all the streamers.
      *
      * @return the vector representation of a B-Tree.
      */
      vector<BTreeNode> getBTree();

    private:
      /*
      * This vector contains the entire B-Tree.
      */
      vector<BTreeNode> b_tree;

 };