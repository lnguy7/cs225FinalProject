Written Report File

--------Algorithms--------

ReadCSV Class:
    This class is used to read our csv files and represent them in a way that is easier to work with. Our ReadCSV object is used in both our BTree and Graph classes to help us create nodes.

    ReadCSV()-
        This is the default constructor for our ReadCSV file class. It doesn't output anything since it is a constructor, but it does initialize the private variables with our current twitch (pre-downloaded) csv files if no other parameters are given. The private variables it initializes are the paths to our two csv files (edges and data), the vector of pairs for our edges, the vector of all of the streamer id's and their data, the size of our dataset, and the map containing all of the streamer id's and their adjacency lists. The test case "Test Reads CSV" tests this implementation by making sure that certain data is in the correct place after reading it. This runs in O(n) time.
    ReadCSV(parameters)-
        This is our constructor that allows us to implement different parameters for our ReadCSV file class. It doesn't output anything since it is a constructor, but it does initialize the private variables with csv files provided in the parameters. This is where a csv file for edges and for streamer data can be added that are not the default ones (though we did not generally need this for our assignment). The private variables it initializes are the paths to our two csv files (edges and data), the vector of pairs for our edges, the vector of all of the streamer id's and their data, the size of our dataset, and the map containing all of the streamer id's and their adjacency lists. The test case "Test Reads CSV" tests this implementation by making sure that certain data is in the correct place after reading it. This runs in O(n) time.
    getFeatureVector()-
        This is our getter for our featureVector_ private variable. This is a double vector of strings that holds the data for each streamer_id we are working with. This runs in O(1) time.
    getMutuals()-
        This function constructs and returns a map that maps streamer_id's (the key), to a set of all the nodes that id is adjacent to (the value). It does this by running through our vector of pairs of our edges, and pushing mutual id's into the set of the id it is connected to. Originally we made a function that would run through this entire file every time we made a node for the BTree or the Graph, but the run time was MUCH too long, so we solved this by making a map one time, and from there we can access the edges in O(1) time for every node we create by just accessing the map. This function's output is assigned to the private variable mutualmap_ in the constructor for this object. This runs in O(n) time.
    fileToVecPair()-
        This function takes a csvfile of edges and converts it to a vector of pairs to return. This edges vector is later used to construct the mutualmap_ of connections. This runs in O(n) time.
    getSize()-
        This function returns the total size of our featureFile_ vector, which is also the amount of streamer id's that we have. This is just a simple getter to access size since we don't have access outside of the class to get private variables without this. This runs in O(1) time.
    getMutualMap()-
        This function returns our mutualmap_ private variable. This variable was earlier populated by getMutuals(), but since it is stored as a private variable, we don't have to rebuild the map every time we want to access the edges of our data conviniently. However, for outside classes to have access to this map, we have this getter to provide access to it. This runs in O(1) time.
    printEdges()-
        This function prints out all of the edges in our graph to the terminal using cout. This is mostly used for testing purposes. Runs in O(n) time.
    printFeature()-
        This function prints out all of data in our feature vector (which holds all of the streamer data) to the terminal using cout. This is mostly used for testing purposes. Runs in O(n) time.

BTree Class:
    This class is our tree representation of our data. We used this to sort and store our data in a way that is convenient to access. The nodes were sorted in order of viewership so we can access the data here based on viewcount per channel.

    BTreeNode::BTreeNode(parameters)-
        This is our parameterized constructor for the BTree nodes. The parameters pass in a streamer id and a ReadCSV object that has our file data. This initializes the id, viewcount, and language parameters for the node by pulling information from the ReadCSV objects featureVector. The mutual followers variable is initialized using the getMutualMap() function. The test case "BTreeNodes build corretly" tests the building of our nodes by checking a random node to see if all of the data is correct based on what we know needs to be the correct data from the csv file. This runs in O(n) time.
    BTreeNode::getId()-
        This function is the getter for the id value for the streamer whose node we are accessing. Returns the private int variable streamer_iden_. This runs in O(1) time.
    BTreeNode::getStreamerViews()-
        This function is the getter for the view count of the streamer whose node we are accessing. Returns the private int variable viewcount_. This runs in O(1) time.
    BTreeNode::getLanguage()-
        This function is the getter for the language of the streamer whose node we are accessing. Returns the private string variable languages_. This runs in O(1) time.
    BTreeNode::setStreamerData()-
        This function allows us to change or set the streamer data for a BTree node. It takes the streamer_id, the viewcount, and the language as parameters and changes the private variables that are in the BTree node. This function is tested in the test case labeled "Testing the Btree setter" where it checks to see if the data can properly be changed inside of a node. This runs in O(1) time.
    BTree(csvfile)-
        This is one of the constructors for our BTree class. It takes a ReadCSV file, and then reads from the vectors in this object to construct all of the nodes for the BTree. It does this by looping through the vector of streamer data and using the BTreeNode constructor to make the node, and then adds them all to a vector to store the nodes in the BTree. This runs in O(n) time.
    BTree(vector)-
        This is one of the constructors for our BTree class. It takes a vector containing all of our streamer data, and then reads from this vector to construct all of the nodes for the BTree. It does this by looping through the vector of streamer data and using the BTreeNode constructor to make the node, and then adds them all to a vector to store the nodes in the BTree. This runs in O(n) time.
    getBTree()-
        This function accesses the vector of BTreeNodes that represents our entire BTree by returning the b_tree private variable. Returns a tree represenation of all the streamers. This runs in O(1) time.
    MergeSort()-
        This is our sorting algorithm for our BTree. It uses the helper function MergeVectors() to merge sort our vector in order of viewcount. The run time of this function is O(nlogn), and is our way to organize our data before we use it in our graph representation of the data. 
    MergeVectors()-
        This is a helper function for the MergeSort algorithm. Most of the information for this functions purpose is contained in the MergeSort() description.

Graph Class:
    This class is the graphical representation of our data. We are using an unweighted, undirected graph. Each node of this graph contains all of the streamers information as well as an adjacency list containing the other streamers that it has mutual followers with.

    GraphNode::GraphNode()-
        This is the default constructor for the nodes in our graph. Similar to the nodes of the BTree it initializes the streamer id, views, language, and mutual followers. The information is taken from the ReadCSV file that was passed to the graphs constructor. This allows us to take all of this data from the same object just from using the one ReadCSV object. This runs in O(n) time.
    GraphNode::getId()-
        This function is the getter for the id value for the streamer whose node we are accessing. Returns the private int variable id_. This runs in O(1) time.
    GraphNode::getViews()-
        This function is the getter for the view count of the streamer whose node we are accessing. Returns the private int variable views_. This runs in O(1) time.
    GraphNode::getLanguage()-
        This function is the getter for the language of the streamer whose node we are accessing. Returns the private string variable language_. This runs in O(1) time.
    GraphNode::setData()-
        This function allows us to change or set the streamer data for the graph node. It takes the streamer_id, the viewcount, the language, and the set of connected streamers as parameters and changes the private variables that are in the graph node. This runs in O(1) time.
    GraphNode::getMutualSize()-
        This function returned the size of the set that contained all of the adjacent nodes to this graph node. We used this to collect some of our data in main and figure out the average amount of edges per language. This runs in O(1) time as it is just returning the size of a set.
    Graph()-
        This is the constructor for our Graph class. It takes a ReadCSV object as a parameter and uses this to construct the graph nodes and obtain the data for each of those nodes. It does this by looping through the vector of streamer data (in the readcsv object) and using the graph node constructor to make the node, and then adds them all to a vector to store the nodes in the graph.
    getGraph()-
        This function accesses the vector of Graph that represents our entire Graph by returning the graph_ private variable. Returns a graphical represenation of all the streamers. This runs in O(1) time.
    getMap()-
        This is a getter for the private variable map_ which contains the map of edges that was constructed and copied from the ReadCSV file.


--------Leading Questions--------

Q: How does gaming culture change across different regions? Which languages are the most popular on Twitch? How does language affect how connected and large each community on Twitch is?

    Through our functions and code, we were able to analyze all of the data we had in order to answer these questions. The three different results we ended up displaying were the average viewer count of the top ten languages, the top streamers for those languages and their viewcounts, and the average number of nodes per language. With this data we had hoped to answer our leading question. Our original hypothesis was that the English language would have the highest viewcount, most connected community, etc. but this ended up not entirely being the case. When we finalized our results, it ended up being that Chinese had the highest average viewcount. English, Spanish, and French all still had relatively high average viewcounts, but still none as high as Chinese. Though this was unexpected, the rest of our data supported certain reasons for this. When we looked at the top highest streamers for each language and compared them, we found that the top English streamer had more than three times the amount of yearly views than the top Chinese streamers. This actually makes sense because the way we calculated this average viewcount was by adding up all of the viewcounts for every streamer under the language, and then dividing by the total number of streamers in that language. There are many many more English streamers than there are Chinese streamers, however most of those English streamers have very low viewcounts. When we took the average of the English streamers, having all of these smaller streamers made the average decrease significantly. On the contrary, there are not very many Chinese streamers, so the ones that there are have very large viewcounts. This is why the average for Chinese viewership is so much higher than the other languages. This generally holds true and shows a pattern for the rest of the data in our first two categories. 
    Seperately, we had also collected the data on the average number of nodes for each language. This was how we planned to answer the second half of our question. Unfortunately the results for this section were not very different and all of the languages had about the same number of average nodes, implying that each community is the same amount connected. This makes sense, however it is not a very interesting result. 
    Overall I think we were successfully able to get the data that we wanted. I think at the beginning of our project we were a bit too ambitious and made questions and had plans to do things that we did not have the time for. We ended up narrowing this down, but I think in the future we will try to be more specific in coming up with our leading questions and planning our project in advance to not have this issue.