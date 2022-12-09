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

BTree Class:
    This class is our tree representation of our data. We used this to sort and store our data in a way that is convenient to access. The nodes were sorted in order of viewership so we can access the data here based on viewcount per channel.

    BTreeNode::BTreeNode()-
        This is the default constructor for our BTree nodes.
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
    Graph()-
        This is the constructor for our Graph class. It takes a ReadCSV object as a parameter and uses this to construct the graph nodes and obtain the data for each of those nodes. It does this by looping through the vector of streamer data (in the readcsv object) and using the graph node constructor to make the node, and then adds them all to a vector to store the nodes in the graph.
    getGraph()-
        This function accesses the vector of Graph that represents our entire Graph by returning the graph_ private variable. Returns a graphical represenation of all the streamers. This runs in O(1) time.
    getMap()-
        This is a getter for the private variable map_ which contains the map of edges that was constructed and copied from the ReadCSV file.

Data Class:
    This class is a helper class composed of functions that are used to help parse and organize the data for the readCSV class. 

    Data()- 
        This is the default constructor for our Data class. 
    file_to_nested_vector()- 
        Given a filename to a CSV-formatted text file, a 2D vector of strings is created where each row in the text file is a row in the V2D and each comma-separated value is stripped of whitespace and stored as its own string. The nested vector of strings created is returned in this function.
    data_to_string()-
        This takes a filename and reads in all the text from the file. The data in the file is read into a string data structure, which is necessary for converting the string to a nested vector. The string that is returned from this function will be the input of the function above, file_to_nested_vector().
    split_string()- 
        Given a string and character, the string is split by the character and stored in a vector. A 'split' string treats the character as a breakpoint and creates a separate item in the output vector for each substring. The function returns the number of substrings that were created during the splitting.
    trim_right_side()-
        This function removes the whitespace to the right of a string.
    trim_left_side()-
        This function removes the whitespace to the left of a string.
    trim_all()-
        This function removes the whitespace to the left and right of a string.


//how was leading questions answered
--------Leading Questions--------